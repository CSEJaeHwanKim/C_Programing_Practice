/*1 . 챕터 9_문제 2번
주사위를 던져서 각각의 면이 몇 번 나왔는지를 출력하는 프로그램을 작성하라. 주사위의 면의 난수를 이용하여 생성한다. 주사위를 던지는 함수 get_dice_face()를 만들고 이 함수 안에서 각각의 면이 나올 때마다 그 횟수를 정적 지역 변수를 이용하여 기억하게 하라. get_dice_face() 호출 횟수가 100의 배수일 때마다 면이 나온 횟수를 출력한다.
Ex) 14 9 18 20 20 19.
34 21 33 37 34 41*/

#include <stdio.h> //표준입출력함수를 이용하기 위한 헤더
#include <stdlib.h> // 표준라이브러리함수를 이용하기 위한 헤더
#include <time.h> // srand()함수를 이용하기 위한 헤더

void get_dice_face(void); // 주사위를 던져서 각각의 숫자가 몇 번 나왔는지를 출력하는 함수

void main(void)
{
	get_dice_face();// 각각의 숫자가 몇 번 나왔는지를 count하는 함수 호출
}

void get_dice_face(void) // 주사위를 던져서 각각의 숫자가 몇 번 나왔는지를 출력하는 함수
{
	static int count1 = 0; //숫자1이 나온 횟수를 세는 static 변수
	static int count2 = 0; //숫자2이 나온 횟수를 세는 static 변수
	static int count3 = 0; //숫자3이 나온 횟수를 세는 static 변수
	static int count4 = 0; //숫자4이 나온 횟수를 세는 static 변수
	static int count5 = 0; //숫자5이 나온 횟수를 세는 static 변수
	static int count6 = 0; //숫자6이 나온 횟수를 세는 static 변수

	int dice_number; // 주사위 숫자를 저장하는 변수
	int sum_result; // 합을 통한 100의 배수가 되는 count들의 합을 저장하는 변수
	int num, i; // 반복문의 횟수와 반복문을 위한 변수

	srand((unsigned)time(NULL));// 난수 발생기가 난수를 발생 할 때 마다 다른 수를 출력
	printf("횟수를 입력하세요 ");
	scanf_s("%d", &num); // 반복문이 반복되는 횟수

	for (i = 0; i < num; i++)
	{
		dice_number = rand() % 6 + 1;// 1 ~ 6사이의 숫자 중 난수 발생
		switch (dice_number)
		{
		case 1: // 난수가 1일 경우 1의 카운트를 한번 더한다.
			count1 += 1;
			break;
		case 2: // 난수가 2일 경우 1의 카운트를 한번 더한다.
			count2 += 1;
			break;
		case 3: // 난수가 3일 경우 1의 카운트를 한번 더한다.
			count3 += 1;
			break;
		case 4: // 난수가 4일 경우 1의 카운트를 한번 더한다.
			count4 += 1;
			break;
		case 5: // 난수가 5일 경우 1의 카운트를 한번 더한다.
			count5 += 1;
			break;
		case 6: // 난수가 6일 경우 1의 카운트를 한번 더한다.
			count6 += 1;
			break;
		}
		sum_result = count1 + count2 + count3 + count4 + count5 + count6;// count가 100번 되었을 때마다 출력
		if (sum_result % 100 == 0)// 난수의 count의 합이 100의 배수 일 때
			printf("%d %d %d %d %d %d\n", count1, count2, count3, count4, count5, count6);// 1~6까지의 숫자가 각각 몇 번씩 나타났는지 출력
	}
}