#include <stdio.h>
#include <stdlib.h>

void Pay(int *A, int *B, int *C, int human);// 월급과 보너스를 통한 회사원 마다의 총임금을 출력하기 위한 함수

int main(void)
{
	int human; // 직원의 수를 입력받기 위한 변수
	int *A, *B, *C; // 배열의 크기를 동적으로 할당 받기 위한 포인터 변수 사용
	int month_pay, bonus; // 월급과 보너스를 입력받기 위한 변수
	int i, j;// 반복문을 사용하기 위한 변수

	printf("직원 수를 입력하세요 ");
	scanf("%d", &human);// 회사원의 수를 입력
	printf("\n");

	A = (int *)malloc (sizeof(int)*human);// 월급을 저장하는 A 배열의 동적할당
	for(i = 0; i < human; i++)//A배열에 월급을 인덱스 순서대로 저장
	{
		printf("직원%d 의 월급을 입력하세요 ", i+1);
		scanf("%d", &month_pay);
		A[i] = month_pay;
	}
	printf("\n");

	B = (int *)malloc (sizeof(int)*human);// 월급을 저장하는 B 배열의 동적할당
	for(j = 0; j < human; j++)//B배열에 보너스를 인덱스 순서대로 저장
	{
		printf("직원%d 의 보너스를 입력하세요 ", j+1);
		scanf("%d", &bonus);
		B[j] = bonus;
	}
	printf("\n");

	C = (int *)malloc (sizeof(int)*human);

	Pay(A, B, C, human);// 총지불 금액을 출력하는 함수

	return 0;
}

void Pay(int *A, int *B, int *C, int human)// 총지불 금액을 출력하는 함수
{
	int i;// 반복문을 사용하기 위한 변수
	for(i = 0; i < human; i++)//인덱스 별로 총 임금 출력
	{
		C[i] = A[i] + B[i];
		printf("직원%d : %d \n",i+1, C[i] );
	}
	printf("\n");
}