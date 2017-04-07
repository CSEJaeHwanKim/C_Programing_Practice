/*2 . 챕터 6_문제 6번
사용자로부터 몇 월인지를 정소 입력 받아서 Jan와 같은 영어 단어로 출력하는 소스를 작성하라
Ex) 월 번호를 입력 하시오(1~12): 12.
Dec*/

#include <stdio.h>

void main()
{
	int month_number;// 달 변수

	printf(" 월번호를 입력하세요 ");
	scanf("%d", &month_number); //월을 입력 받습니다

	switch (month_number)// 월번호을 비교합니다
	{
	case 1: //1월에 대한 January 출력 
		printf(" January\n");
		break;
	case 2: //2월에 대한 Fabuary 출력
		printf(" Fabuary\n");
		break;
	case 3: //3월에 대한 March 출력
		printf(" March\n");
		break;
	case 4: //4월에 대한 April 출력
		printf(" April\n");
		break;
	case 5: //5월에 대한 May 출력
		printf(" May\n");
		break;
	case 6: // 6월에 대한 June 출력 
		printf(" June\n");
		break;
	case 7: // 7월에 대한 July 출력
		printf(" July\n");
		break;
	case 8: // 8월에 대한 August 출력
		printf(" August\n");
		break;
	case 9: // 9월에 대한 September 출력
		printf(" September\n");
		break;
	case 10: // 10월에 대한 October 출력 
		printf(" October\n");
		break;
	case 11: // 11월에 대한 November 출력
		printf(" November\n");
		break;
	case 12: // 12월에 대한 December 출력
		printf(" December\n");
		break;
	default: // 달에 없는 잘못된 입력입니다
		printf(" 잘못된 입력입니다\n");
		break;
	}
}