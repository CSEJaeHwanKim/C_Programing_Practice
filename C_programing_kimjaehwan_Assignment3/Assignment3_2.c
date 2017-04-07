//420p 5번문제
#include <stdio.h>

void show_digit(int x);

int main(void)
{
	int x;

	printf(" 정수 하나를 입력하세요 ");
	scanf("%d", &x); // n자리 정수 입력

	show_digit(x);//재귀함수 출력
	return 0;
}

void show_digit(int x)
{
	if(x >= 10) //n 자리 정수의 순차적으로 1000 100 10 1과 같이 나눈다
		show_digit(x / 10);
	printf("%d ", x % 10);// 재귀함수에 따른 값의 출력
}