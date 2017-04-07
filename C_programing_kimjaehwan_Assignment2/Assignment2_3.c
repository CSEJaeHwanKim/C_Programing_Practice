#include <stdio.h>
#include <malloc.h>

int array_equal(int *a, int *b, int size);

int main(void)
{
	int *a ;
	int *b; 
	int size;
	int i = 0;
	printf(" 배열의 크기를 입력하세요\n ");
	scanf("%d", &size);

	a = (int *)malloc(sizeof(int) * size);
	printf(" a배열을 입력하세요\n");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	
	b = (int *)malloc(sizeof(int) * size);
	printf(" b배열을 입력하세요\n");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &b[i]);
	}
	printf(" a와 b의 원소 배열은 같으면 1 다르면 0을 반환한다\n");
	if(array_equal(a,b,size) == 0)
	{
		printf(" 반환값은 %d으로 서로 같은 인덱스의 위치한 배열의 값이 다르다\n",array_equal(a,b,size));
	}
	else if(array_equal(a,b,size) == 1)
	{
		printf(" 반환값은 %d으로 서로 같은 인덱스의 위치한 배열의 값이 같다\n",array_equal(a,b,size));
	}
	return 0;
}
int array_equal(int *a, int *b, int size)
{
	int i=0;
	for(i = 0; i < size; i++)
	{
		if( a[i] != b[i] )
		{
			return 0;
		}
	}
	return 1;
}
