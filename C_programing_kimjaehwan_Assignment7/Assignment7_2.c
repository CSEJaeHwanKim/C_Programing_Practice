#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct food// 구조체 음식
{
	char name[100];// 음식 이름
	int calories;// 음식의 칼로리
};

void main(void)
{
	struct food food_array[3];// 구조체 배열 선언
	int i, j;// 반복문 사용을 위한 변수 선언
	int result = 0;// 최종 칼로리 변수
	int c;// 입력버퍼를 비우기 위한 변수

	for (i = 0; i < 3; i++)// 세가지의 음식을 입력
	{
		printf("음식을 입력하세요 ");
		fgets(food_array[i].name, sizeof(food_array[i].name), stdin);// 문자열 입력을 통한 음식을 입력
		printf("칼로리를 입력하세요 ");
		scanf_s("%d", &food_array[i].calories);// 칼로리 입력
		printf("\n");
		while ((c = getchar()) != '\n'&&c != EOF);// 입력버퍼를 비우기 위한 방법
	}
	for (j = 0; j < 3; j++)// 총칼로리를 구하기 위해 모든 칼로리의 값을 더한다.
	{
		result += food_array[j].calories;
	}
	printf("\n");
	printf("총 칼로리는 %d 입니다 \n", result);// 총칼로리 출력
}