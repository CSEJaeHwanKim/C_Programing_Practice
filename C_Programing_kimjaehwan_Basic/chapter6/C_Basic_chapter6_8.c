/*4 . 챕터 6_문제 8번
놀이 공원의 자유이용권의 가격을 계산하는 프로그램을 작성하여 보자. 입장 시간은 다음과 같은 조건으로 결정된다. 현자 시간과 사용자의 나이를 입력 받아서 지불 하여야 하는 가격을 화면에서 출력한다.
Ex) 체중과 키를 입력 하시오(키, 체중): 180 80.
과체중입니다*/

#include <stdio.h>
#include <stdlib.h>

void time_table(void); //가격 테이블

void main()
{
	int enterTime; //시간 입력 변수
	int age; // 나이 입력 변수

	while (1)
	{
		time_table(); //가격 테이블 함수 출력

		printf("시간과 나이를 입력하세요(Hour, Age)");
		scanf("%d %d", &enterTime, &age); // 입장 시간돠 나이를 입력

		if ((enterTime >= 9 && enterTime < 17)) // 시간이 오전 9시부터 오후 5시 이전에 입장
		{
			if ((age >= 3 && age <= 12) || (age >= 65)) // 나이가 3살 이상 12살 이하 이며 65세 이상일때
				printf("자유이용권 시간대의 어린이와 노약자로 가격은 25,000원 입니다\n");
			else if (age > 13 || age < 65) // 나이가 13살 보다 많으며 65세이하일때
				printf("자유이용권 시간대의 성인으로 가격은 34,000원 입니다\n");
		}
		else if ((enterTime >= 17 && enterTime < 24))// 시간이 오후 5시부터 오후 24시 이전에 입장
		{
			if ((age >= 3 && age <= 12) || (age >= 65))// 나이가 3살 이상 12살 이하 이며 65세 이상일때
				printf("야간이용권 시간대의 어린이와 노약자로 가격은 10,000원 입니다\n");
			else if (age > 13 || age < 65)// 나이가 13살 보다 많으며 65세이하일때
				printf("야간이용권 시간대의 성인으로 가격은 10,000원 입니다\n");
		}
		else // 시간이 잘못 입력됬을 경우
		{
			printf(" 잘못된 입력입니다 \n");
			break;
		}
		system("pause");
		system("cls");
	}
}

void time_table(void) //가격 테이블
{
	printf(" -------------------------------------------------------------------------\n");
	printf(" |                   구분              |   대인   | 소인(3~12세/65세이상)|\n");
	printf(" -------------------------------------------------------------------------\n");
	printf(" |자유이용권(오전 9시 ~ 오후 17시이전) | 34,000원 |        25,000원      |\n");
	printf(" -------------------------------------------------------------------------\n");
	printf(" |야간이용권(오후 17시 ~ 오후 24시이전)|           10,000원              |\n");
	printf(" -------------------------------------------------------------------------\n");
}
