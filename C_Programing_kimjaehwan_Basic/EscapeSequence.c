#include<stdio.h>

void test_function(void);
void main(void)
{
	int n = 0;
	int i;
	printf("hi\n");
	printf("%%d\n");
	printf("\\n\n");
	printf("\"hello world\", hello world\n");
	printf("'hello world', hello world\n");
	test_function();
	test_function();
	for (i = 0; i < 10; i++)
	{
		if (i < 5)
			break;
		else
			continue;
		printf("hello world\\n");
	}
	printf("\n");
}

void test_function(void)
{
	int a = 0;
	static int b = 0;
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	a++;
	b++;
}