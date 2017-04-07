#include <stdio.h>

void main(void)
{
	int arr[101];
	int arr2[101] = { 0, };
	int n, i, j;
	for (i = 2; i <= 100; i++)
	{
		arr[i] = i;
	}
	for (i = 3; i <= 100; i++)
	{
		for (j = 2; j <= 100; j++)
		{
			if (arr[i] != j && arr[i] % j == 0)
			{
				arr2[i] = 1;
				break;
			}
		}
	}
	for (j = 2; j <= 100; j++)
	{
		if (arr2[j] == 0)
		{
			printf("%d ", j);
		}
	}
	printf("\n");

}