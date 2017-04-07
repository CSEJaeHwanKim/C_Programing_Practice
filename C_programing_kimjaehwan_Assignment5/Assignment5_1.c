#include <stdio.h>
void get_sum_diff(int x, int y, int *p_sum, int *p_diff); // call by value와 call by reference를 구하기 위해 사용하는 함수
void main(void)
{
	int x, y; // 합과 차를 구하기 위해 입력 받는 변수
	int sum, diff; // 합과 차를 출력하기 위해 대입하는 변수

	printf("2개의 정수를 입력하세요 ");
	scanf("%d %d", &x, &y); // 두개의 변수 입력

	get_sum_diff(x, y, &x, &y);// call by value와 call by reference를 구하기 위해 사용하는 함수

	sum = x + y; // call by value
	diff = x - y; // call by value
	printf("Main_Print\n");
	printf("call by value x + y : %d\n", sum );// call by value
	printf("call by value x - y : %d\n", diff );// call by value
	printf("call by reference x + y : %d\n", x);// call by reference
	printf("call by reference x - y : %d\n", y);// call by reference
	printf("\n\n");
}
void get_sum_diff(int x, int y, int *p_sum, int *p_diff)// call by value와 call by reference를 구하기 위해 사용하는 함수
{
	int sum = x + y;// call by value
	int diff = x - y;// call by value
	*p_sum = x + y;// call by reference
	*p_diff = x - y;// call by reference
	printf("Function_Print\n");
	printf("call by value x + y : %d\n", sum );// call by value
	printf("call by value x - y : %d\n", diff );// call by value
	printf("call by reference x + y : %d\n", *p_sum);// call by reference
	printf("call by reference x - y : %d\n", *p_diff);// call by reference
	printf("\n\n");
}
