#include <stdio.h> 
#include <math.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void)
{
	int num;

	printf("임의의 숫자릅입력하세요\n");
	scanf_s("%d", &num);

	printf("%d\n", even(num));
	printf("%d\n", absolute(num));
	printf("%d\n", sign(num));
	return 0;
}

int even(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int absolute(int n)
{
	return abs(n);
}

int sign(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n > 0)
	{
		return 1;
	}
	else if (n == 0)
	{
		return 0;
	}
}