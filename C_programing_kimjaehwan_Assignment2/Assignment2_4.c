#include <stdio.h>
#include <malloc.h>

void array_copy(int *a, int *b, int size);

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
	array_copy(a, b, size);
	return 0;
}
void array_copy(int *a, int *b, int size)
{
	int i=0;
	for(i = 0; i < size; i++)
	{
		b[i] = a[i];
		printf("copy 배열 b[%d]:%d\n",i , b[i]);
	}
}
