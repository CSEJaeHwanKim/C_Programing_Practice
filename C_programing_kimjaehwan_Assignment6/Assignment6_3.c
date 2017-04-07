// 3(교재 561페이지 4번)
#include <stdio.h>// 표준입출력 함수 사용을 위한 헤더

struct complex// 구조체 complex
{
	double real;// 구조체 변수 real
	double imag;// 구조체 변수 imag
};

struct complex complex_add(struct complex c1, struct complex c2)// 구조체함수 complex_add
{
	struct complex a;// 구조체 변수 complex의 real과 imag사용을 위한 선언
	a.real = c1.real + c2.real; //구조체 복소수합
	a.imag = c1.imag + c2.imag;// 구조체 복소수합
	return a;// 구조체 반환
};

void main(void)
{
	struct complex num1, num2;// 합을 위한 구조체 2개 선언
	struct complex sum;	// 구조체 복소수 합을 위한 구조체 선언
	printf("복소수1 입력 : ");
	scanf("%lf %lf", &num1.real, &num1.imag);//합이되는 구조체1 변수 복소수 입력
	printf("복소수2 입력 : ");
	scanf("%lf %lf", &num2.real, &num2.imag);//합이되는 구조체2 변수 복소수 입력
	sum = complex_add(num1, num2);
	printf("복소수 합: %lf %lf\n", sum.real, sum.imag);// 구조체의 복소수합 출력
}