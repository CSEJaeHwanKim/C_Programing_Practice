//640p 6
#include <stdio.h>

#define SET_BIT(n,pos) ( n |= (0x01 << pos) )// SET ��Ʈ ��ũ��
#define CLR_BIT(n,pos) ( n &= (~0x01 << pos) )// CLR ��Ʈ ��ũ��
#define GET_BIT(n,pos) ( (n >> pos) & 0x01 )// GET ��Ʈ ��ũ��

void main(void)
{
	int n;
	printf("Enter n ");
	scanf_s("%d", &n);// ��Ʈ ������ ���� ���� �Է�
	printf("SET_BIT : %d \n", SET_BIT(n, 1));// SET ��Ʈ
	printf("CLR_BIT : %d \n", CLR_BIT(n, 0));// CLR ��Ʈ
	printf("GET_BIT : %d \n", GET_BIT(n, 1));// GET ��Ʈ
}