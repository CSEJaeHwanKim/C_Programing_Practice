#include <stdio.h>
#include <stdlib.h>
int get_random(void);

int main(void)
{
	get_random();
	get_random();
	get_random();
	get_random();
	get_random();
	return 0;
}

int get_random(void)
{
	static int inited = 0;
	if (inited == 0)
	{
		inited = rand();
		printf("������ ������ %d�Դϴ�\n", inited);
	}
	else
	{
		printf("Statice���� ���� ������ ��ȯ���� �ʽ��ϴ�\n");
	}
	return inited;
}