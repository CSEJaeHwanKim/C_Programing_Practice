//420p 5������
#include <stdio.h>

void show_digit(int x);

int main(void)
{
	int x;

	printf(" ���� �ϳ��� �Է��ϼ��� ");
	scanf("%d", &x); // n�ڸ� ���� �Է�

	show_digit(x);//����Լ� ���
	return 0;
}

void show_digit(int x)
{
	if(x >= 10) //n �ڸ� ������ ���������� 1000 100 10 1�� ���� ������
		show_digit(x / 10);
	printf("%d ", x % 10);// ����Լ��� ���� ���� ���
}