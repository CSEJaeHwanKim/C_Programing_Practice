#include <stdio.h>
#include <math.h>

int val;

extern void sub();
extern int absolute(int n);

int main(void)
{
	int num;
	int result;

	printf("�ܺ��Լ�(int absoulte(int n) �Լ�)�� �׽�Ʈ�� ���ڸ� �Է��ϼ���\n");
	scanf_s("%d", &num);

	sub();
	absolute(num);
	printf("�ܺκ���(test.c)�� ����Ǿ� �ִ� %d�Դϴ�\n", val);
	return 0;
}