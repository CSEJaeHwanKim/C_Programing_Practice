#include <stdio.h>
void get_sum_diff(int x, int y, int *p_sum, int *p_diff); // call by value�� call by reference�� ���ϱ� ���� ����ϴ� �Լ�
void main(void)
{
	int x, y; // �հ� ���� ���ϱ� ���� �Է� �޴� ����
	int sum, diff; // �հ� ���� ����ϱ� ���� �����ϴ� ����

	printf("2���� ������ �Է��ϼ��� ");
	scanf("%d %d", &x, &y); // �ΰ��� ���� �Է�

	get_sum_diff(x, y, &x, &y);// call by value�� call by reference�� ���ϱ� ���� ����ϴ� �Լ�

	sum = x + y; // call by value
	diff = x - y; // call by value
	printf("Main_Print\n");
	printf("call by value x + y : %d\n", sum );// call by value
	printf("call by value x - y : %d\n", diff );// call by value
	printf("call by reference x + y : %d\n", x);// call by reference
	printf("call by reference x - y : %d\n", y);// call by reference
	printf("\n\n");
}
void get_sum_diff(int x, int y, int *p_sum, int *p_diff)// call by value�� call by reference�� ���ϱ� ���� ����ϴ� �Լ�
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
