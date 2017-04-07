/*5 . 챕터 8_문제 10번
두개의 정수 n, m을 입력 받아서 n이 m의 배수이면 1을 반환하고 그렇지 않으면 0을 반환하는 함수 is_multiple (int n, int m)를 작성하고 테스트하여 보자
Ex) 첫 번째 정수를 입력 하시오 : 30
두 번째 정수를 입력 하시오 : 5
30은 5의 배수 입니다.*/

#include <stdio.h>// 표준입출력 함수 사용을 위한 헤더

int is_multiple(int n, int m); // 배수인지의 여부를 판단하는 함수

void main(void)
{
	int number1, number2;// 변수를 입력받기 위한 변수
	printf("첫 번째 정수를 입력 하세요 ");
	scanf_s("%d", &number1);// 첫 번째 변수 입력
	printf("두 번째 정수를 입력 하세요 ");
	scanf_s("%d", &number2);// 두 번째 변수 입력
	if (is_multiple(number1, number2) == 1)// 두 수가 배수 일경우
		printf("%d는 %d의 배수 입니다 \n", number1, number2);
	else// 두 수가 배수가 아닐경우
		printf("%d는 %d의 배수가 아닙니다 \n", number1, number2);
}

int is_multiple(int n, int m)// 배수인지의 여부를 판단하는 함수
{
	return (n % m == 0) ? 1 : 0; // 입력받은 변수가 배수일 경우 1반환 아닐 경우 0 반환
}