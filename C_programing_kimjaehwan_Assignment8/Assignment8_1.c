#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 52 // 총 카드의 수

typedef struct// 카드의 숫자와, 알파벳 문자를 위한 구조체
{
	int value;
	char suit;
}card;

void main(void)
{
	card Card[MAX_SIZE];// 카드를 위한 구조체 배열

	int suit_rand, value_rand;// 카드의 랜덤값 저장을 위한 변수
	int i, j;// 반복문을 사용을 위한 변수
	int count = 0;// 구조체 배열의 인덱스 역할을 위한 변수
	char shape[4] = { 'c','d','h','s' };// 카드의 알파벳

	printf("초기화값\n");
	for (i = 0;i < 4; i++)// 다중 반복문을 사용하여 52개의 카드를 구조체 배열에 알파벳과 숫자를 입력한다.
	{
		for (j = 1;j <= 13; j++)
		{
			Card[count].value = j;
			Card[count].suit = shape[i];
			count++;
		}
	}
	for (i = 0; i < MAX_SIZE; i++) // 입력된 카드를 출력
	{
		printf("%d%c ", Card[i].value, Card[i].suit);
		if ((i + 1) % 13 == 0)
			printf("\n");
	}
	printf("\n");

	srand((unsigned)time(NULL));// 랜덤한 값을 컴파일시 마다 다른 숫자를 사용하기 위해 사용
	
	count = 0;
	printf("랜덤값\n");

	for (i = 0; i < 4; i++)// 다중 반복문을 사용하여 랜덤 한 값을 변수에 저장한다.
	{
		for (j = 1; j <= 13; j++)
		{
			suit_rand = rand() % 3;
			value_rand = rand() % 13 + 1;
			Card[count].value = value_rand;
			Card[count].suit = shape[suit_rand];
			count++;
		}
	}

	for (i = 0; i < MAX_SIZE; i++)// 구조체배열에 저장된 카드를 출력한다.
	{
		printf("%d%c ", Card[i].value, Card[i].suit);
		if ((i + 1) % 13 == 0)
			printf("\n");
	}
}

