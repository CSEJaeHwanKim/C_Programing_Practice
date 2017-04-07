#include <stdio.h>
#include <stdlib.h>

void array_print(int *A, int size); // 배열에 저장되어 있는 수를 출력하기 위한 함수

int main(void)
{
	int *arr; // 배열의 크기를 사용자 임의대로 구하기 위한 동적할당을 위한 포인터 변수 사용
	int arr_size; // 배열의 크기를 입력받기 위해 사용하는 변수
	int arr_value; // 배열에 들어가는 변수를 입력받기 위해 사용하는 변수
	int i; // 반복문을 사용하기 위한 변수
	printf("배열의 크기를 입력하세요 ");
	scanf("%d", &arr_size);// 배열의 크기 입력
	
	arr = (int *)malloc(sizeof(int)*arr_size);// 포인터 변수를통한 배열의 크기 동적할당
	for(i = 0;i < arr_size; i++)// 배열에 대입하는 값들을 인덱스 순서로 대입
	{
		printf("배열에 들어갈 값을 입력하세요 ");
	    scanf("%d", &arr_value);
		arr[i] = arr_value;
	}
	array_print(arr, arr_size);// 배열에 저장되어 있는 수를 출력하기 위한 함수
	return 0;
}
void array_print(int *A, int size)// 배열에 저장되어 있는 수를 출력하기 위한 함수
{
	int i;// 반복문을 사용하기 위한 지역 변수
	printf(" arr = { ");// 배열의 출력
	for(i = 0; i < size; i++)// 배열의 인덱스 순서대로 출력
	{
		printf("%d ", A[i]);
	}
	printf("} \n");
}