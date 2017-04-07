//640p 6
#include <stdio.h>

#define SET_BIT(n,pos) ( n |= (0x01 << pos) )// SET 비트 매크로
#define CLR_BIT(n,pos) ( n &= (~0x01 << pos) )// CLR 비트 매크로
#define GET_BIT(n,pos) ( (n >> pos) & 0x01 )// GET 비트 매크로

void main(void)
{
	int n;
	printf("Enter n ");
	scanf_s("%d", &n);// 비트 연산을 위한 정수 입력
	printf("SET_BIT : %d \n", SET_BIT(n, 1));// SET 비트
	printf("CLR_BIT : %d \n", CLR_BIT(n, 0));// CLR 비트
	printf("GET_BIT : %d \n", GET_BIT(n, 1));// GET 비트
}