#include <stdio.h>

int get_tri_number(int n);

int main(void)
{
	int num;
	printf("n��° �ﰢ���� �Է��ϼ���\n");
	scanf_s("%d", &num);
	printf("�ﰢ����: %d�Դϴ�\n", get_tri_number(num));
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