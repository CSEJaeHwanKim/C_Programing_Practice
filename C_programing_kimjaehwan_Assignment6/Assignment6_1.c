//1 (���� 512������ 11��)
#include <stdio.h> // ǥ�� ����� �Լ��� ���� ���
#include <stdlib.h> // ǥ�� ���̺귯�� �Լ��� ���� ���
#include <string.h> // ���ڿ� �Լ�(strtok)�� ����ϱ� ���� ���

void main(void)
{
	char str[100];// ���ڿ� �Է��� ���� ����
	char word[] = " ,\t\n"; // ���ڿ��� ������ ���� ������ ������ �ϴ� ����
	char *token; // ���ڿ��� ������ ���� ��ū�� ����� ���� ����
	char *text[10]; // �ڸ� ���ڿ� ����
	int i, j, count = 0;// �ݺ��� �� ���ڿ��� ���� ��Ÿ ���� count�� ���� ���� ����

	printf("Enter String : ");
	scanf("%s", str);
	//fgets(str, sizeof(str), stdin);// ���ڿ� �Է�
	str[strlen(str) - 1] = NULL;// ���ڿ��� ���� NULL���� ����
	token = strtok(str, word); // ��ū�� ����� ����

	for (i = 0; token != NULL; i++)// ���� ���ڰ� NULL���ڰ� ������ ������ �ݺ�
	{
		text[i] = token;// NULL���ڰ� �ƴҰ�� text�迭�� ����
		token = strtok(NULL, word);// ���� ��ū�� ��´� ���
		count++;// ����� ���ڿ��� ���� ����
	}
	for (i = count - 1; i >= 0; i--)// ���Ե� ���ڿ� �ε��� �Ųٷ� ���
		printf("%s ", text[i]);
	printf("\n");
}