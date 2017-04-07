/*3 . 챕터 8_문제 8번
0.0 부터 1.0까지의 난수를 반환하는 함수 f_rand()를 작성하고 5번 호출하여 본다.
Ex) 0.001251 0.563585 0.193304 0.808741 0.585009*/

#include <stdio.h>// 표준입출력함수 사용을 위한 헤더
#include <stdlib.h>// 표준 라이브러리함수 사용을 위한 헤더
#include <time.h>// srand()함수 사용을 위한 헤더

double f_rand(void);//0.0 에서 1.0사이의 숫자를 랜덤하게 출력하기 위한 함수

void main(void)
{
	int i;// 반복문 사용을 위한 변수
	srand((unsigned)time(NULL));// 프로그램 실행시 마다 다른 숫자를 반화하기 위해 사용
	for (i = 0; i < 5; i++) // 5번의 함수호출을 위한 반복문 사용
		printf("%lf \n", f_rand());

}

double f_rand(void)//0.0 에서 1.0사이의 숫자를 랜덤하게 출력하기 위한 함수
{
	double rand_result; //램덤함수의 값을 저장하기 위한 변수
	rand_result = rand() / (double)RAND_MAX;// 저장되는 값이 0.0에서 1.0사이 숫자가 될수 있게 RAND_MAX로 나눈다
	return rand_result;// 결과값 반화
}