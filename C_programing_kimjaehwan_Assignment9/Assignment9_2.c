#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define MAX 4

void sort_string(char *s[], int size); // ���� ������ ���� ���ڿ� ���ĺ������� ����

void main(void)
{
	char *s[4]={"abple","aaple","apple","acple"};// ������ �迭�� ���ڿ� ����
	int i, j;// �ݺ����� ����ϱ� ���� ����
	//char *s[4]; //���ڿ��� �Է¹޾� ó���ϱ� ���� �پ��� ����� ����� �غ������� ���� �ʾ� ���ڿ��� ������ �迭�� ����� ���·� �̿��ϴ� ����� ����Ͽ����ϴ�
	//char s[4][100];
	/*char **s;
	int num1, num2;
	printf("2���� �迭�� ũ�� (n1, n2)�� �Է��ϼ��� ");
	scanf_s("%d %d", &num1, &num2);
	s = (int **)malloc(sizeof(int*)*num1);
	for (i = 0; i < num1; num1++)
	{
		s[i] = (int *)malloc(sizeof(int*)*num2);
	}
	for (i = 0; i < num1; i++)
	{
			printf("Enter String : ");
			scanf_s("%s",s[i]);
	}*/
	sort_string(s,4);// ���� ������ ���� ���ڿ� ���ĺ������� ���� �Լ�
	for (i = 0; i < 4; i++)// ���ĵ� ������ �迭�� ���ڿ� ���
	{
		puts(s[i]);
		printf("\n");
	}	
}
void sort_string(char *s[], int size)// ���� ������ ���� ���ڿ� ���ĺ������� ����
{
	char *temp;// ���� ���� �ٲ��ֱ� ���� ������ ����
	int min, i, j;// �ּڰ��� �ݺ��� ����� ���� ����
	for (i = 0; i < size; i++)// ���� ����� ���� ���� ����� �̿�
	{
		min = i;
		temp = *(s + i);
		for (j = i + 1; j < size; j++)
		{
			if (strcmp(*(s + min), *(s + j)) > 0)
			{
				temp = *(s + j);
				min = j;
			}
		}
		*(s + min) = *(s + i);
		*(s + i) = temp;
	}
}