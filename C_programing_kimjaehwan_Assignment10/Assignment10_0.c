//640p 4

#include <stdio.h>

#define PI 3.141592 //PI��ũ�� ����
#define function_define(a,b) (PI*a*a*b)//���Ǹ� ����ϴ� �Լ� ��ũ�� ���� 

void main(void)
{
	int r, h;
	printf("Enter r ");
	scanf_s("%d", &r);//������ �Է�
	printf("Enter h ");
	scanf_s("%d", &h);//���� �Է�
	printf("���� ����: %.3lf \n", function_define(r, h));// �Լ� ��ũ�θ� ���� ���� ���Ǹ� ���ϰ� ���
}