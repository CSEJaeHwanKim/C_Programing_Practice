#include <stdio.h>
#include <stdlib.h>

#define SIZE_ARRAY 10

int Max(int *arr);
int Min(int *arr);

int i = 0;

int main(void)
{
	int arr[10];

	for(i = 0; i < SIZE_ARRAY ; i++)
	{
		arr[i] = rand();
		printf(" ¹è¿­%d: %d\n", i+1, arr[i]);
	}
	printf(" max: %d\n", Max(arr));
	printf(" min: %d\n", Min(arr));
	return 0;
}

int Max(int *arr)
{
	int max = arr[0];
	for(i = 0; i < SIZE_ARRAY; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int Min(int *arr)
{
	int min = arr[0];
	for(i = 0; i < SIZE_ARRAY; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}