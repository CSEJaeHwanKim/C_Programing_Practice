// 2(���� 512������ 13��)
#include <stdio.h>// ǥ�� ����� �Լ� ����� ���� ���
#include <string.h>// ���ڿ� �Լ� ����� ���� ���

void main(void)
{
	char str[100];// ���ڿ� �Է��� ���� ����
	int i, count = 0;// �ݺ��� �� �������� ���� ���� ����

	printf("Enter String : ");
	fgets(str, sizeof(str), stdin);// ���ڿ� �Է�
	str[strlen(str) - 1] = NULL;// ���ڿ� ���� NULL���� ����

	for (i = 0; str[i] != NULL; i++)
	{
		if (str[i] == ',' || str[i] == '.')// �������� ���ö����� count +1
			count++;
	}
	printf("�������� ����: %d\n", count);// �� ������ ���� ���
}