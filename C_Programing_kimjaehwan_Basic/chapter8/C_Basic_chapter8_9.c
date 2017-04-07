/*4 . 챕터 8_문제 9번
화면에 세로로 막대 그래프를 그리는 프로그램을 작성하여 보자. 인수의 값만큼의 별표 문자를 출력하는 함수 print_value(int n)을 작성하라. 반복적으로 사용자로부터 값을 입력 받아서 print_value()를 호출하여 입력 값만큼 막대를  그리는 프로그램을 완성하라. 사용자가 음수를 입력하면 반복을 중단하라.
Ex) 값을 입력하세요(종료는 음수 입니다): 5
*****
값을 입력하세요(종료는 음수 입니다): -1*/

#include <stdio.h>// 표준 입출력함수 사용을 위한 헤더
#include <Windows.h>// 유틸리티 함수 사용을 위한 헤더

void Print_value(int n);// 사용자에게 입력받은 수만큼 별문자 출력을 위한 함수

void main(void)
{
	int star_number;// 별을 몇 번 출력 할것인지 입력받기 위한 변수
	while (1)// 무한 반복문 사용
	{
		printf("값을 입력하세요 (종료는 음수 입니다): ");
		scanf_s("%d", &star_number);// 별의 숫자 입력
		if (star_number < 0)// 음수를 입력받았을경우 반복문 종료
			break;
		else// 음수가 아닌 양수를 입력받았을경우 입력받은 숫자만큼 별문자 출력
			Print_value(star_number);
		system("pause");// cmd창 일시적인 정지
		system("cls");// cmd창을 지우는 기능 수행
	}
}

void Print_value(int n)// 사용자에게 입력받은 수만큼 별문자 출력을 위한 함수
{
	int i;//반복문 사용을 위한 변수
	for (i = 0; i < n; i++)// 입력받은 수만큼 반복문 수행
	{
		printf("*");// 별문자 출력
	}
	printf("\n");// 개행
}