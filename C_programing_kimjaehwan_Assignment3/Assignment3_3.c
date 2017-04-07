#include <stdio.h>

int main(void)
{
	int arr[10];//피보나치 수열 10개의 숫자 출력을 위한 배열의 크기가 10 배열 선언
	int x = 1;// 피보나치 수열의 첫번째수는 1로 초기화
	int y = 0;//피보나치 수열의 진행에 따른 앞의 2개의 숫자들의 합
	int z = 1;//피보나치 수열의 2번째 숫자
	int i;
	for(i=0; i < 10; i++)
	{
		printf(" %d ", x);
		y = x + z;
		x = z;
		z = y;
	}
	return 0;
}