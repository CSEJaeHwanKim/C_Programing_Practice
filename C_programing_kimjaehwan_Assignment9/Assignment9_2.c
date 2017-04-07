#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define MAX 4

void sort_string(char *s[], int size); // 선택 정렬을 통한 문자열 알파벳순으로 정렬

void main(void)
{
	char *s[4]={"abple","aaple","apple","acple"};// 포인터 배열에 문자열 저장
	int i, j;// 반복문을 사용하기 위한 변수
	//char *s[4]; //문자열을 입력받아 처리하기 위해 다양한 방법을 사용을 해보았으나 되지 않아 문자열을 포인터 배열에 저장된 상태로 이용하는 방법을 사용하였습니다
	//char s[4][100];
	/*char **s;
	int num1, num2;
	printf("2차월 배열의 크기 (n1, n2)를 입력하세요 ");
	scanf_s("%d %d", &num1, &num2);
	s = (int **)malloc(sizeof(int*)*num1);
	for (i = 0; i < num1; num1++)
	{
		s[i] = (int *)malloc(sizeof(int*)*num2);
	}
	for (i = 0; i < num1; i++)
	{
			printf("Enter String : ");
			scanf_s("%s",s[i]);
	}*/
	sort_string(s,4);// 선택 정렬을 통한 문자열 알파벳순으로 정렬 함수
	for (i = 0; i < 4; i++)// 정렬된 포인터 배열의 문자열 출력
	{
		puts(s[i]);
		printf("\n");
	}	
}
void sort_string(char *s[], int size)// 선택 정렬을 통한 문자열 알파벳순으로 정렬
{
	char *temp;// 작은 수를 바꿔주기 위한 포인터 변수
	int min, i, j;// 최솟값과 반복문 사용을 위한 변수
	for (i = 0; i < size; i++)// 정렬 방식을 선택 정렬 방식을 이용
	{
		min = i;
		temp = *(s + i);
		for (j = i + 1; j < size; j++)
		{
			if (strcmp(*(s + min), *(s + j)) > 0)
			{
				temp = *(s + j);
				min = j;
			}
		}
		*(s + min) = *(s + i);
		*(s + i) = temp;
	}
}