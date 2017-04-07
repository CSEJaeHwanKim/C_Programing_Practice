// 2(교재 512페이지 13번)
#include <stdio.h>// 표준 입출력 함수 사용을 위한 헤더
#include <string.h>// 문자열 함수 사용을 위한 헤더

void main(void)
{
	char str[100];// 문자열 입력을 위한 변수
	int i, count = 0;// 반복문 및 구두점을 세기 위한 변수

	printf("Enter String : ");
	fgets(str, sizeof(str), stdin);// 문자열 입력
	str[strlen(str) - 1] = NULL;// 문자열 끝에 NULL문자 대입

	for (i = 0; str[i] != NULL; i++)
	{
		if (str[i] == ',' || str[i] == '.')// 구두점이 나올때마다 count +1
			count++;
	}
	printf("구두점의 갯수: %d\n", count);// 총 구두점 갯수 출력
}