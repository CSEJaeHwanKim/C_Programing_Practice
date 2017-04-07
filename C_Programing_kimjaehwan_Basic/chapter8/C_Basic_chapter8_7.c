/*2 . 챕터 8_문제 7번
앞에서 작성한 b_rand()함수를 이용하여 간단한 동전 던지기 게임을 시뮬레이션하여 보자. 컴퓨터가 동전을 던지고 사용자는 앞 뒤를 말한다. 컴퓨터는 b_rand()를 이용하여 생성된 난수가 1이면 동전의 앞면으로 간주하고 0이면 동전의 뒷면으로 간주한다.
Ex) 앞면 또는 뒷면(1 또는 0): 1
맞았습니다.
계속하시겠습니까? (y 또는 n): n*/

#include <stdio.h>// 표준 입출력 사용을 위한 헤더
#include <stdlib.h>// 표준 라이브러리 함수 사용을 위한 헤더
#include <time.h>// srand()함수 사용을 위한 헤더
#include <Windows.h>// 유틸리티 함수 사용을 위한 헤더

int b_rand(void);//0 또는 1을 출력하는 함수

void main(void)
{
	int user_choice;// 사용자의 0또는 1 선택을 위한 변수
	char choice_continue;// 프로그램을 계속할것인지 여부 판단을 위한 변수
	while (1)
	{
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf_s("%d", &user_choice);// 사용자의 선택을 입력받는 변수
		while (getchar() != '\n');// scanf를 사용함에 있어 버퍼로 인안 오류를 해결하기 위해 버퍼를 비워준다.
		if (user_choice == b_rand())// 사용자의 선택과 랜덤에 의한 숫자가 같은 경우
			printf("컴퓨터의 동전은 %d로 사용자의 선택과 맞았습니다\n", b_rand());
		else// 사용자의 선택과 랜덤에 의한 숫자가 다른 경우
			printf("컴퓨터의 동전은 %d로 사용자의 선택과 틀렸습니다\n", b_rand());
		printf("계속하시겠습니까? (y 또는 n): ");
		//scanf_s("%c", &choice_continue);
		choice_continue = getchar();// 프로그램을 계속할것인지에 대한 여부 판단.
		system("cls");// cmd창의 화면에 출력되어 있는것을 지워준다.
		if (choice_continue == 'n')// 계속할것인지의 여부에서 n을 선택했을시 프로그램을 종료한다.
			break;
	}

}
int b_rand(void)//0 또는 1을 출력하는 함수
{
	int n; //랜덤함수를 통한 변수 저장
	srand((unsigned)time(NULL)); // 출력을 할때마다 다른 숫자로 바꿔주는 기능 수행
	n = rand() % 2; // 0또는 1을 랜덤하게 n변수에 저장
	return n;// 0 또는 1 반환
}