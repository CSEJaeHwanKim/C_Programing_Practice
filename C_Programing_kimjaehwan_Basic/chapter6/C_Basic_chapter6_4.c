/*1 . 챕터 6_문제 4번
컴퓨터와 가위, 바위, 보 게임을 하는 프로그램을 작성하라. 컴퓨터는 사용자에게 알지 않고 가위, 바위, 보 중에서 임의로 하나를 선택한다. 사용자는 프로그램의 입력 안내 메시지에 따라서, 3개중에서 하나를 선택하게 된다. 사용자의 선택이 끝나면 컴퓨터는 누가 무엇을 선택하였고 누가 이겼는지, 비겼는지를 알려 준다.
Ex) 선택 하시오(1: 가위 2: 바위 3: 보) 1.
비겼음*/

#include <stdio.h>
#include <stdlib.h> // 난수를 위해 선언
#include <time.h> //  srand()통한 컴파일때마다 다른 수를 생성합니다.
#include <Windows.h> // 컴파일 창을 반복적으로 수행 clear 기능을 수행하는 system함수를 사용하기 위해 선언 되었습니다.

void gawibawibo(int user_choice, int computer_choice);// 가위, 바위, 보를 위한 함수 유저와 컴퓨터의 가위 바위 보를 매개변수로 가지고 연산을 시작합니다. 

void main()
{
	int user_choice;// 유저의 선택
	int computer_choice; //컴퓨터의 난수에 의한 선택

	srand(time(NULL)); // 컴파일할때 마다 다른 난수를 생성
	computer_choice = rand() % 3 + 1; // 1~3까지의 수를 저장

	while (1)  //4를 입력하기 전까지 계속적으로 가위 바위 보를 반복적으로 수행
	{
		printf(" 선택하세요(1: 가위 2: 바위 3: 보 4:프로그램종료) ");
		scanf("%d", &user_choice); // 유저의 가위 바위 보를 입력
		gawibawibo(user_choice, computer_choice); // 함수의 매개변수로 유저의 입력과 컴퓨터의 난수를 입력
		if (user_choice == 4){ break; } // 4를 입력함으로서 while을 바뼈나오며 프로그램 종료
		system("pause"); //커맨더 창이 완전히 지워지기 전에 멈추는 기능수행
		system("cls"); // 커맨더 창을 지우는 역할 수행
	}
}

void gawibawibo(int user_choice, int computer_choice)// 가위, 바위, 보를 위한 함수 유저와 컴퓨터의 가위 바위 보를 매개변수로 가지고 연산을 시작합니다.
{
	if (user_choice == computer_choice) // 유저의 선택과 컴퓨터 난수에 의한 선택이 같을 경우 비겼다고 판단합니다
		printf(" 비겼습니다\n");
	else
	{
		if (user_choice == 1) // 유저가 가위를 선택
		{
			if (computer_choice == 2) // 컴퓨터는 바위를 선택하게 되어 유저를 이기게 됩니다.
				printf(" 컴퓨터는 %d로 유저가 컴퓨터에게 졌습니다\n", computer_choice);
			else // 컴퓨터는 보를 선택하게 되어 유저가 이기됩니다.
				printf(" 컴퓨터는 %d로 유저가 컴퓨터에게 이겼습니다\n", computer_choice);
		}
		else if (user_choice == 2)// 유저가 바위를 선택
		{
			if (computer_choice == 3)// 컴퓨터는 보를 선택하게 되어 유저를 이기게 됩니다.
				printf(" 컴퓨터는 %d로 유저가 컴퓨터에게 졌습니다\n", computer_choice);
			else // 컴퓨터는 가위를 선택하게 되어 유저에게 지게 됩니다.
				printf(" 컴퓨터는 %d로 유저가 컴퓨터에게 이겼습니다\n", computer_choice);
		}
		else if (user_choice == 3)// 유저가 보를 선택
		{
			if (computer_choice == 1)// 컴퓨터가 가위를 선택하게 되어 컴퓨터에게 지게 됩니다
				printf(" 컴퓨터는 %d로 유저가 컴퓨터에게 졌습니다\n", computer_choice);
			else// 컴퓨터가 바위를 선택하게 되어 컴퓨터에게 이기게 됩니다.
				printf("컴퓨터는 %d로 유저가 컴퓨터에게 이겼습니다\n", computer_choice);
		}
		else if (user_choice == 4) // 4를 선택시 프로그램을 종료하게굅니다 
			printf(" 프로그램을 종료합니다\n");
		else // 선택지에 없는 명렁으로 다른 선택을 하도록 다시 커맨드 시작이 됩니다.
			printf(" 잘못된 입력입니다 다시입력해주세요\n");
	}
}
