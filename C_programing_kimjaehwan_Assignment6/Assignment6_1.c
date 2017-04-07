//1 (교재 512페이지 11번)
#include <stdio.h> // 표준 입출력 함수를 위한 헤더
#include <stdlib.h> // 표준 라이브러리 함수를 위한 헤더
#include <string.h> // 문자열 함수(strtok)를 사용하기 위한 헤더

void main(void)
{
	char str[100];// 문자열 입력을 위한 변수
	char word[] = " ,\t\n"; // 문자열을 나누기 위한 구분자 역할을 하는 변수
	char *token; // 문자열을 나누기 위한 토큰을 사용을 위한 변수
	char *text[10]; // 자른 문자열 저장
	int i, j, count = 0;// 반복문 및 문자열의 끝을 나타 내는 count를 세기 위한 변수

	printf("Enter String : ");
	scanf("%s", str);
	//fgets(str, sizeof(str), stdin);// 문자열 입력
	str[strlen(str) - 1] = NULL;// 문자열의 끝을 NULL문자 대입
	token = strtok(str, word); // 토큰을 사용한 구분

	for (i = 0; token != NULL; i++)// 끝의 문자가 NULL문자가 나오기 전까지 반복
	{
		text[i] = token;// NULL문자가 아닐경우 text배열에 대입
		token = strtok(NULL, word);// 다음 토큰을 얻는대 사용
		count++;// 저장된 문자열의 길이 역할
	}
	for (i = count - 1; i >= 0; i--)// 대입된 문자열 인덱스 거꾸로 출력
		printf("%s ", text[i]);
	printf("\n");
}