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
		printf("생성된 난수는 %d입니다\n", inited);
	}
	else
	{
		printf("Statice으로 인해 난수가 반환되지 않습니다\n");
	}
	return inited;
}