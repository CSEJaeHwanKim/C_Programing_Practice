//640p 7
#include <stdio.h>

#define SET_BIT(n,pos) ( n |= (0x01 << pos) )// SET 비트 매크로
#define CLR_BIT(n,pos) ( n &= (~0x01 << pos) )// CLR 비트 매크로
#define GET_BIT(n,pos) ( (n >> pos) & 0x01 )// GET 비트 매크로

void display_bit(int value);// 이진수로 변환하기 위한 함수 선언

void main(void)
{
	int n;

	printf("Enter n ");
	scanf_s("%d", &n);
	SET_BIT(n, 1);// SET 비트 매크로
	CLR_BIT(n, 0);// CLR 비트 매크로
	GET_BIT(n, 1);// GET 비트 매크로
	display_bit(n);// 입력 받은 정수 n을 2진수로 바꿔준다.
}

void display_bit(int n)// 2진수로 변환하는 함수
{
	int i;
	for (i = 31; i >= 0; i--)//32자리 숫자를
	{
		if (GET_BIT(n, i))//이진수에 맞는 자리면 1
			printf("1");
		else//이진수에 맞는 자리면 0
			printf("0");
	}
	printf("\n");
}

