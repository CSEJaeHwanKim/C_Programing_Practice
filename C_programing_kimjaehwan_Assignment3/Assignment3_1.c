//372p 8번문제
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100 //배열의 크기 지정
int Max(int *arr); // 배열의 값중 최잿값 출력

int main(void)
{
	int a[ARRAY_SIZE]; // 100의개의 0~9까지의 변수를 저장하기 위한 배열
	int b[10]; // 0~9까지의 배열의 출력 횟수를 count하기 위한 배열
	int x = 0;
	int y = 0;
	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;// 각각의 0~9까지의 출력되는 숫자의 count를 세기위한 변수들
	int i;// 반복문에 사용되는 변수
	for(i = 0; i < ARRAY_SIZE; i++ )
	{
		a[i] = rand() % 10;// 난수 생성
		printf("%d 번째 배열에 들어있는 수는 %d 입니다.\n",i, a[i]);
		if(a[i] == 0) //0의 횟수 count
		{
			count0 += 1;
			b[0] = count0;
		}
		if(a[i] == 1)//1의 횟수 count
		{
			count1 += 1;
			b[1] = count1;
		}
		if(a[i] == 2)//2의 횟수 count
		{
			count2 += 1;
			b[2] = count2;
		}
		if(a[i] == 3)//3의 횟수 count
		{
			count3 += 1;
			b[3] = count3;
		}
		if(a[i] == 4)//4의 횟수 count
		{
			count4 += 1;
			b[4] = count4;
		}
		if(a[i] == 5)//5의 횟수 count
		{
			count5 += 1;
			b[5] = count5;
		}
		if(a[i] == 6)//6의 횟수 count
		{
			count6 += 1;
			b[6] = count6;
		}
		if(a[i] == 7)//7의 횟수 count
		{
			count7 += 1;
			b[7] = count7;
		}
		if(a[i] == 8)//8의 횟수 count
		{
			count8 += 1;
			b[8] = count8;
		}
		if(a[i] == 9)//9의 횟수 count
		{
			count9 += 1;
			b[9] = count9;
		}
	}
	 
	for(x = 0; x < 10; x++)// 가장 많은 횟수를 출력하기 위한 y
	{
		if(b[x] == Max(b))
			y = x;
	}
	printf("가장 많이 출력되는 수는 %d입니다\n",y);
	printf("종 %d번 나옵니다\n",Max(b));
	return 0;
}
int Max(int *arr) //배열의 최댓값을 저장하기 위한 배열
{
	int i=0;
	int max = arr[0];// 최댓값 비교를 위한 맨처음의 max값을 배열의 첫번째 값을 대입
	for(i = 0; i < 10; i++)
	{
		if(max < arr[i]) // 배열의 저장되어 있는 값이 현재의 max값보다 클경우
		{
			max = arr[i];//max값 변경
		}
	}
	return max;//max값 반환
}