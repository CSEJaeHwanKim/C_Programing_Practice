//421p 9번문제
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_grade(int **arr,int number,int subject);// 점수 및 학번을 출력하기 위한 함수
void insert_grade(int **arr,int number,int subject); // 학번 별 각각의 시험마다 점수를 삽입하기 위한 함수
void max_grade(int **arr,int number,int subject); // 점수 중 가장 큰 점수 출력을 위한 함수
void min_grade(int **arr,int number,int subject); // 점수 중 가장 작은 점수 출력을 위한 함수

void main(void)
{
	int i; //반복문 변수
	int student_number; // 학생수 변수
	int subject_number; // 과목수 번수
	int **arr;// 학생수와 과목수에 따른 점수를 저장하기위한 2차원 배열을 위한 다중 포인터
	printf("학생수를 입력하세요 ");
	scanf("%d", &student_number);
	printf("과목수를 입력하세요 ");
	scanf("%d", &subject_number);
	arr =(int**) malloc(sizeof(int*) * student_number);// 2차원 배열의 크기를 사용자가 지정하기 위해 동적할당을 위해 다중 포인터 변수 사용
	for(i=0; i<student_number; i++)
	{
		arr[i]= (int*) malloc (sizeof(int) *subject_number);// 2차원 배열의 크기 동적할당
	}
	insert_grade(arr,student_number,subject_number);//점수 삽입
	print_grade(arr,student_number,subject_number);// 점수 출력
	max_grade(arr,student_number,subject_number);// 최댓값 출력
	min_grade(arr,student_number,subject_number);// 최솟값 출력
	for(i = 0; i < student_number; i++)// 동적할당 해제
	{
		free(arr[i]); 
	}
	free(arr);
}

void print_grade(int **arr,int number,int subject)// 점수 및 학번 출력을 위한 함수
{
	int i, j;// 2차원 배열 출력을 위한 변수 
	int count = 1; // 학번 출력을 위한 변수
	printf("학번, 시험#1, 시험#2, 시험#3, 시험#4, 시험#5, 시험#6, 시험#7, 시험#8, 시험#9\n");//학번의 위치와 각각의 시험의 점수를 알려주기 위한 제목 테이블
	for(i = 0; i < number; i++)// 학번 및 점수 출력
	{
		printf("  %d ", count++);
		for(j = 0; j < subject; j++)
		{
			printf(" %5d  ", arr[i][j]);
		}
		printf("\n");
	}

}
void insert_grade(int **arr,int number,int subject)// 점수 삽입을 위한 함수
{
	int i, j;
	srand(time(NULL));// 점수를 난수로 저장
	for(i = 0; i < number; i++)// 점수를 난수로 저장
	{
		for(j = 0; j < subject; j++)
		{
			arr[i][j] = rand()%101;// 0~100 까지 즉 101단계
		}
	}
}
void max_grade(int **arr,int number,int subject)// 최댓값을 출력하기 위한 함수
{
	int i, j;
	int max_point= arr[0][0];// 최댓값 비교를 위한 점수 중 최초값으로 초기화
	for(i = 0; i < number; i++)//최댓값 비교 및 대입
	{
		for(j = 0; j < subject; j++)
		{
			if(max_point < arr[i][j])
			{
				max_point = arr[i][j];
			}
		}
	}
	printf("max: %d\n", max_point);//최댓값 출력
}
void min_grade(int **arr,int number,int subject)// 최솟값을 출력하기 위한 함수
{
	int i, j;
	int min_point= arr[0][0];// 최솟값 비교를 위한 점수 중 최초값으로 초기화
	for(i = 0; i < number; i++)//최솟값 비교 및 대입
	{
		for(j = 0; j < subject; j++)
		{
			if(min_point > arr[i][j])
			{
				min_point = arr[i][j];
			}
		}
	}
	printf("min: %d\n", min_point);//최솟값 출력
}