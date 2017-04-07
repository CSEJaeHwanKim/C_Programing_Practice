#include <stdio.h>

void set_max_ptr(int m[], int size, int **pmax);// 최댓값을 선택하는 함수

void main(void)
{
	int m[6] = {5,6,10,3,7,9};// 배열
	int *pmax;// 최댓값 변수
	int i;
	for (i = 0; i < 6; i++)// 배열에 저장된수 출력
	{
		printf("배열 %d: %d \n",i+1, m[i]);
	}
	printf("\n");
	set_max_ptr(m,6,&pmax);// 최댓값을 선택하는 함수
	printf("Max: %d \n", *pmax);// 최댓값 출력
}

void set_max_ptr(int m[], int size, int **pmax)// 최댓값을 선택하는 함수
{
	int temp, i;
	temp = m[0];// 맨처음 값을 대입
	for(i = 0; i < size; i++)// 최댓값 판별
	{
		if(temp < m[i])
			temp = m[i];
	}
	*pmax = &temp;// 최댓값 변수에 대입
}