/*3 . 챕터 6_문제 7번
사용자로부터 키를 입력 받아서 표준 체중을 계산한 후 사용자의 체중과 비교하여 저체중인지, 표준인지, 과체중인지를 판단하는 프로그램을 작성하라 표준 체중은 밑의 식을 사용하라
Ex) 체중과 키를 입력 하시오(키, 체중): 180 80.
과체중입니다*/

#include <stdio.h>

void main()
{
	double height; // 키 변수
	double weight; // 몸무게 변수
	double average_weight; // 평균 몸무게 변수

	printf(" 키를 입력하세요 ");
	scanf("%lf", &height); // 키를 입력 받습니다
	printf(" 몸무게를 입력하세요 ");
	scanf("%lf", &weight); // 몸무게를 입력 받습니다.

	average_weight = (height - 100) * 0.9; // 평균 몸무게를 계산
	if (weight > average_weight) // 몸무게가 평균 몸무게보다 클경우
		printf(" 과체중 입니다.\n");
	else if (weight == average_weight) // 몸무게가 평균 몸무게와 같을 경우
		printf(" 적정 체중입니다.\n");
	else // 몸무게가 평균 몸무게보다 작을 경우 
		printf(" 저체중입니다.\n");
}