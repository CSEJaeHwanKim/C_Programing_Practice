//640p 4

#include <stdio.h>

#define PI 3.141592 //PI매크로 선언
#define function_define(a,b) (PI*a*a*b)//부피를 계산하는 함수 매크로 선언 

void main(void)
{
	int r, h;
	printf("Enter r ");
	scanf_s("%d", &r);//반지름 입력
	printf("Enter h ");
	scanf_s("%d", &h);//높이 입력
	printf("원의 부피: %.3lf \n", function_define(r, h));// 함수 매크로를 통한 원의 부피를 구하고 출력
}