//640p 7
#include <stdio.h>

#define SET_BIT(n,pos) ( n |= (0x01 << pos) )// SET ��Ʈ ��ũ��
#define CLR_BIT(n,pos) ( n &= (~0x01 << pos) )// CLR ��Ʈ ��ũ��
#define GET_BIT(n,pos) ( (n >> pos) & 0x01 )// GET ��Ʈ ��ũ��

void display_bit(int value);// �������� ��ȯ�ϱ� ���� �Լ� ����

void main(void)
{
	int n;

	printf("Enter n ");
	scanf_s("%d", &n);
	SET_BIT(n, 1);// SET ��Ʈ ��ũ��
	CLR_BIT(n, 0);// CLR ��Ʈ ��ũ��
	GET_BIT(n, 1);// GET ��Ʈ ��ũ��
	display_bit(n);// �Է� ���� ���� n�� 2������ �ٲ��ش�.
}

void display_bit(int n)// 2������ ��ȯ�ϴ� �Լ�
{
	int i;
	for (i = 31; i >= 0; i--)//32�ڸ� ���ڸ�
	{
		if (GET_BIT(n, i))//�������� �´� �ڸ��� 1
			printf("1");
		else//�������� �´� �ڸ��� 0
			printf("0");
	}
	printf("\n");
}

