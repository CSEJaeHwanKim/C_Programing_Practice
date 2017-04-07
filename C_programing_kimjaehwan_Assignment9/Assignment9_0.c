#include <stdio.h>

void seclected_proverb(char **q, int n);// 인덱스에 따른 저장된 문자열을 출력하는 함수

void main(void)
{
	int n;
	char *s;// 함수에서 선택되는 문자열 저장하는 포인터 변수
	printf("Enter number : ");
	scanf_s("%d", &n);// 선택하고자 하는 문자열 번호
	printf("\n");
	seclected_proverb(&s,n);// 인덱스에 따른 저장된 문자열을 출력하는 함수
	printf("seclected_proverb = %s\n\n",s);
}

void seclected_proverb(char **q, int n)// 인덱스에 따른 저장된 문자열을 출력하는 함수
{
	static char *array[10]= //인덱스에 따른 문자열 저장하는 포인터 배열 
	{
		"1. A bad shearer never had a good sickle.",
		"2. A bad workman (always) blames his tools",
		"3. A bad workman quarrels with his tools",
		"4. A bad thing never dies",
		"5. 낮말은 쥐가 듣고 밤말은 새가 듣는다",
		"6. 소귀에 경 읽기",
		"7. 소 잃고 외양간 고친다",
		"8. 금상첨화",
		"9. 새옹지마",
		"10. 누워서 떡먹기"
	};
	int i;
	for (i = 0; i < 10; i++)// 저장된 문자열 출력
	{
		printf("%s\n", array[i]);
	}
	printf("\n");
	*q = array[n-1];// 선택된 문자열
}









