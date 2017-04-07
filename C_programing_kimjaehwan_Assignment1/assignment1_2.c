#include <stdio.h>
#include <math.h>

int val;

extern void sub();
extern int absolute(int n);

int main(void)
{
	int num;
	int result;

	printf("외부함수(int absoulte(int n) 함수)를 테스트할 숫자를 입력하세요\n");
	scanf_s("%d", &num);

	sub();
	absolute(num);
	printf("외부변수(test.c)에 선언되어 있는 %d입니다\n", val);
	return 0;
}