#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binary(int arr[], int n);

void main(void)
{
	int arr[32] = { 0, };
	int arr1[10] = { 0, };
	int n1, n2, i, j = 1;
	int count = 1;
	int result = 0;
	int k = 1;

	printf("Enter n_10 ");
	scanf_s("%d", &n1);
	binary(arr, n1);
	printf("Enter n_2 ");
	scanf_s("%d", &n2);
	printf("n2 : %d", n2 % 2);
	while (n2 > 0)
	{
		if (n2 % 2)
			result += k;
		k *= 2;
		n2 /= 10;
	}
	printf("result : %d", result);

}

void binary(int arr[], int n)
{
	int i, j;
	for (i = 0; i < 32 && n > 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
}