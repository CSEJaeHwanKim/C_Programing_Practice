/*1 . 챕터 8_문제 6번
난수(random number)는 컴퓨터를 이용한 문제 해결에서 많이 사용된다, 특히 수학적인 분석이 너무 복잡한 경우에 시뮬레이션을 사용하면 실제로 제품을 제작하지 않고서도 많은 실험을 할 수 있다. 비주얼 C++의 경우, rand()가 한번 호출될 때마다 0에사 32767까지의 정수를 같은 확률로 선택하여 반환한다. Rand()함수를 이용하여 0 또는 1값을 무작위로 반환하는 함수 b_rand()를 작성하고 5번 호출하여 보자.
Ex) 1 1 0 0 1.
비겼음*/

#include <stdio.h>//표준 입출력함수를 사용하기 위해 선언
#include <stdlib.h>// 표준 라이브러리 함수를 사용하기 위해 선언
#include <time.h> // srand()함수를 하용하기위해 선언

void b_rand(void); //0 또는 1을 출력하는 함수

void main(void)
{
	b_rand();// 함수 호출
}

void b_rand(void)
{
	int random_number;// 0 또는 1을 랜덤하게 대입하는 변수
	int i; // 반복문을 사용을 위한 변수
	srand((unsigned)time(NULL));//출력 할 때마다 변화된 숫자를 출력하기 위한 함수
	for (i = 0; i < 5; i++)// 반복문 5번 수행
	{
		random_number = rand() % 2;// 0 또는 1만 숫자 생성
		printf("%d ", random_number); //0또는 1 출력
	}
	printf("\n");// 개행
}