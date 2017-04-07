#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000// 입력받는 문자열의 최대 크기

struct mail
{
	char title[MAX];// 메일의 제목
	char sender[MAX];// 메일을 보내는 사람
	char receiver[MAX];// 베일을 받는 사람
	char content[MAX];// 메일을 내용
	char date[MAX];// 메일을 보내는 날짜
	int priority;// 우선순위
};

void main(void)
{
	struct mail mail;// 구조체 선언
	printf("제목을 입력하세요 ");
	fgets(mail.title, sizeof(mail.title), stdin);// 문자열 제목 입력
	printf("보내는 사람을 입력하세요 ");
	fgets(mail.sender, sizeof(mail.sender), stdin);// 문자열 보내는 사람 입력
	printf("받는 사람을 입력하세요 ");
	fgets(mail.receiver, sizeof(mail.receiver), stdin);// 문자열 받는 사람 입력
	printf("내용을 입력하세요 ");
	fgets(mail.content, sizeof(mail.content), stdin);// 문자열 내용 입력
	printf("날짜를 입력하세요 ");
	fgets(mail.date, sizeof(mail.date), stdin);// 문자열 날짜 입력
	printf("우선 순위를 입력하세요 ");
	scanf_s("%d", &mail.priority);// 우선순위 입력
	printf("\n");
	printf("제목 : %s", mail.title);// 메일의 제목 출력
	printf("보내는 사람 : %s", mail.sender);// 메일을 보내는 사람 출력
	printf("받는 사람 : %s", mail.receiver);// 메일을 받는 사람 출력
	printf("메일 내용 : %s", mail.content);// 메일의 내용 출력
	printf("보낸 날짜 : %s", mail.date);// 메일의 날짜 출력
	printf("우선 순위 : %d\n", mail.priority);// 메일의 우선순위 출력
}