/*3 . 챕터 9_문제 5번
은행 계좌에서 저축하고 인출하는 프로그램을 작성하여 보자. Save(int mount)함수는 저금할 금액 amount를 받으며 save(100)과 같이 호출된다. Draw(int amount)함수는 예금한 금액의 인출을 나타낸다. 사용자에게 메뉴를 보여주고 저축 또는 인출을 선택하게 한다.
Ex) 메뉴를 선택하세요 : 저축(1), 인출(2) : 1
저축할 금액: 5000
현재 잔액은 10000입니다.*/


#include <stdio.h> // 표준 입출력 함수를 위한 헤더
#include <Windows.h> // 유틸리티 함수를 사용하기 위한 헤더

int save(int amount);// 입력 받은 돈을 저축하기 위한 함수
int draw(int amount);// 입력 받은 돈을 인출하기 위한 함수

int balance = 5000;// 통장의 돈의 인출과 저축을 위한 전역 변수

void main(void)
{
	int menu_select; // 저축을 할 것 인지 인출을 할 것 인지 프로그램을 종료할 것 인지를 입력 받기 위한 변수
	int save_money; // 저축할 금액의 돈을 입력 받기 위한 변수
	int use_money; // 인출할 금액의 돈을 입력 받기 위한 변수

	while (1) // 3을 입력 받을 경우 반복문을 빠져나가고 1~3사이의 숫자가 아닌 다른 수를 입력 받았을 경우 반복문을 다시 수행
	{
		printf("메뉴를 선택하세요: (1) 저축, (2) 인출, (3) 프로그램종료 ");
		scanf_s("%d", &menu_select); // 메뉴 입력
		if (menu_select == 1) // 1을 입력 받았을 경우 돈을 저축
		{
			printf("저축할돈을 입력하세요 ");
			scanf_s("%d", &save_money); // 저축하고자 하는 돈의 금액 입력
			save(save_money); // 입력 받은 돈의 금액만큼 저축
			printf("현재 잔액은 %d입니다\n", balance); // 저축 후 현재 금액 출력
		}
		else if (menu_select == 2) //2을 입력 받았을 경우 돈을 인출
		{
			printf("인출 할 돈을 입력하세요 ");
			scanf_s("%d", &use_money); // 인출할 금액 입력
			draw(use_money); // 입력 받은 돈의 금액만큼 인출
			printf("현재 잔액은 %d입니다\n", balance); // 인출 후 현재 금액 출력
		}
		else if (menu_select == 3) //2을 입력 받았을 경우 돈을 인출		
		{
			printf("현재 잔액은 %d입니다\n", balance); // 현재 금액 출력
			break; // 반복문을 종료한다.
		}
		else
		{
			printf("잘못된 입력입니다 \n");// 1~3사이의 숫자 입력이 아닐 시 잘못된 입력이라는 경고 문구 출력
			system("pause");//화면을 지우기 이전에 잠시 멈추는 기능 수행
			system("cls");// 화면을 지우는 기능 수행
			continue;// 반복문을 계속한다.
		}
		system("pause");//화면을 지우기 이전에 잠시 멈추는 기능 수행
		system("cls");// 화면을 지우는 기능 수행
	}
}

int save(int amount)// 입력 받은 돈을 저축하기 위한 함수
{
	balance += amount;// amount만큼 금액에 더한다.
	return balance;// 더한 값을 반환
}

int draw(int amount)// 입력 받은 돈을 인출하기 위한 함수
{
	balance -= amount;// amount만큼 금액을 빼준다.
	return balance;// 뺀 값을 반환
}