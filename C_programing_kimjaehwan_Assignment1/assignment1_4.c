#include <stdio.h>

int get_tri_number(int n);

int main(void)
{
	int num;
	printf("n번째 삼각수를 입력하세요\n");
	scanf_s("%d", &num);
	printf("삼각수는: %d입니다\n", get_tri_number(num));
	return 0;
}

int get_tri_number(int n)
{
	if (n <= 1)
		return 1;
	else
	{
		return n + get_tri_number(n - 1);
	}
}