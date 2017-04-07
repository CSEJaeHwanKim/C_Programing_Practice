#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <string.h>

typedef struct// 엘범의 제목, 가수, 저장된장소, 분류, 별점의 변수를 위한 구조체 선언
{
	char title[100];//제목
	char singer[100];//가수
	char save_point[100];// 저장 장소
	char group[100];//분류
	int number;//별점
} Music;

void Print_Menu(void);//메뉴를 출력하기 위한 함수
void add_Menu(Music *list);// 엘범을 추가하기 위한 함수
void search_Menu(Music *list);// 저장된 엘범에서 메뉴를 찾기 위한 함수
void delete(Music *list);// 저장된 엘범에서 엘범을 삭제하기 위한 함수
void Print(Music *list);// 저장된 엘범 목록을 출력

int num = 0;//구조체 베열의 인덱스 역할을 수행

void main(void)
{
	Music music[100];// 엘범 구조체 배열 선언
	int n;// 메뉴중 수행하고자하는 함수 번호를 입력
	while (1)
	{
		Print_Menu();// 메뉴 출력
		printf("메뉴를 선택하세요 ");
		scanf_s("%d", &n);// 메뉴 번호 입력
		while (getchar() != '\n');// 입력 버퍼를 비우는 작업 수행
		switch (n)//메뉴번호 입력에서
		{
		case 1://1일 경우 엘범 추가
			add_Menu(music);
			break;
		case 2://2일경우 저장된 엘범 목록 출력
			Print(music);
			break;
		case 3://3일 경우 저장된 엘범 목록에서 엘범을 탐색
			search_Menu(music);
			break;
		case 4://4일 경우 저장된 엘범 목록에서 엘범을 삭제 
			delete(music);
			break;
		case 5://5일경우 프로그램 종료
			exit(1);
		default:// 1~5값이외의 값을 입력시 잘못된 입력으로 다시 처음으로 돌아가서 작업 수행
			printf("잘못된 입력 입니다 다시 입력 해주세요\n");
			continue;
		}
		system("pause");//cmd창을 깨끗이 하기 위해 사용
		system("cls");
		while (getchar() != '\n');// 입력버퍼를 비우기 위해 사용
	}
	
}
void Print_Menu(void)// 메뉴 출력 함수
{
	printf("================\n");
	printf("1. 추가(add)\n");
	printf("2. 출력(print)\n");
	printf("3. 검색(search)\n");
	printf("4. 삭제(delete)\n");
	printf("5. 종료(exit)\n");
	printf("================\n");
}

void add_Menu(Music *list)// 엘범 목록 추가
{
	printf("제목을 입력하세요 ");
	gets(list[num].title);
	printf("가수를 입력하세요 ");
	gets(list[num].singer);
	printf("저장된 위치를 입력하세요 ");
	gets(list[num].save_point);
	printf("분류를 입력하세요(가요, 팝, 클래식, 영화음악) ");
	gets(list[num].group);
	printf("별점을 입력하세요 ");
	scanf_s("%d", &(list[num].number));
	num++;
}

void search_Menu(Music *list)// 엘범 탐색
{
	int i, result;
	char song[100];//찾고자하는 엘범의 제목 변수

	printf("찾을 곡의 제목을 입력하세요 ");
	gets(song);//찾고자하는 엘범의 제목 입력

	for (i = 0; i < num; i++)
	{
		result = strcmp(song, list[i].title);//찾고자하는 엘범의 제목을 비교하여 저장된 목록에 있는지 비교
		if (result == 0)// 0일경우 목록에 찾고자 하는 목록이 존재한다
		{
			printf("제목은 %s입니다\n", list[i].title);
			printf("가수는 %s입니다\n", list[i].singer);
			printf("저장된 위치는 %s입니다\n", list[i].save_point);
			printf("분류는 %s입니다\n", list[i].group);
			printf("별점:은 %d입니다\n", list[i].number);
			break;
		}
	}
	if(result != 0)// 0이 아닐경우 목록에 찾고자 하는 목록이 없다.
		printf("찾으시는 노래가 없습니다. \n");
}

void delete(Music *list)// 엘범 목록에서 삭제 하고자 하는 엘범
{
	int i, result, number, find = 0;
	char song[100];

	printf("삭제할 곡의 제목을 입력 해주세요 ");
	gets(song);// 삭제하고자 하는 엘범의 제목을 입력

	for (i = 0; i< num; i++)
	{
		result = strcmp(song, list[i].title);//찾고자하는 엘범의 제목을 비교하여 저장된 목록에 있는지 비교
		if (result == 0)// 0일경우 목록에 찾고자 하는 목록이 존재한다
		{
			number = i;
			find = 1;// 찾는게 있다는 flag 역할 수행
			break;
		}
	}
	if (find == 1)//찾는 엘범이 있다.
	{
		for (i = number; i < num - 1; i++)// 찾는 엘범의 자료를 지운다.
		{
			strcpy_s(list[i].title, 100, list[i + 1].title);
			strcpy_s(list[i].singer, 100, list[i + 1].singer);
			strcpy_s(list[i].save_point, 100, list[i + 1].save_point);
			strcpy_s(list[i].group, 100, list[i + 1].group);
			list[i].number = list[i + 1].number;
		}
		num--;
	}
}

void Print(Music *list)// 저장된 엘범의 목록을 출력
{
	int i;

	printf("저장된 곡은 총 %d개 입니다.\n", num);
	for (i = 0; i < num; i++)
	{
		printf("제목: %s\n", list[i].title);
		printf("가수: %s\n", list[i].singer);
		printf("저장된 위치: %s\n", list[i].save_point);
		printf("분류: %s\n", list[i].group);
		printf("별점: %d\n", list[i].number);
		printf("\n");
	}
}