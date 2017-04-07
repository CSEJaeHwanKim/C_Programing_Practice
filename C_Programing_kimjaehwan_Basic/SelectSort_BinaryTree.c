#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 16

void selection_sort(int[]);
int binary_search(int[], int);

void main(void)
{
	int key, i;
	int grade[SIZE] = { 0, };
	srand((unsigned)time(NULL));
	for (i = 0; i<SIZE; i++)
	{
		grade[i] = rand() % 100;
	}
	selection_sort(grade);
	for (i = 0; i <SIZE; i++)
	{
		printf("%d ", grade[i]);
	}
	printf("\n");
	printf("Enter key ");
	scanf("%d", &key);
	printf("%d\n", binary_search(grade, key));
}

void selection_sort(int g[])
{
	int i, j, temp, min;

	for (i = 0; i<SIZE - 1; i++)
	{
		min = i;
		for (j = i + 1; j<SIZE; j++)
		if (g[j]<g[min])
			min = j;
		temp = g[i];
		g[i] = g[min];
		g[min] = temp;
	}
}

int binary_search(int list[], int key)
{
	int low, high, middle;
	low = 0;
	high = SIZE - 1;
	while (low <= high)//crossÇÑ´Ù
	{
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle])
		{
			printf("success\n");
			return middle;
		}
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	printf("fail\n");
	return -1;
}