// 3(���� 561������ 4��)
#include <stdio.h>// ǥ������� �Լ� ����� ���� ���

struct complex// ����ü complex
{
	double real;// ����ü ���� real
	double imag;// ����ü ���� imag
};

struct complex complex_add(struct complex c1, struct complex c2)// ����ü�Լ� complex_add
{
	struct complex a;// ����ü ���� complex�� real�� imag����� ���� ����
	a.real = c1.real + c2.real; //����ü ���Ҽ���
	a.imag = c1.imag + c2.imag;// ����ü ���Ҽ���
	return a;// ����ü ��ȯ
};

void main(void)
{
	struct complex num1, num2;// ���� ���� ����ü 2�� ����
	struct complex sum;	// ����ü ���Ҽ� ���� ���� ����ü ����
	printf("���Ҽ�1 �Է� : ");
	scanf("%lf %lf", &num1.real, &num1.imag);//���̵Ǵ� ����ü1 ���� ���Ҽ� �Է�
	printf("���Ҽ�2 �Է� : ");
	scanf("%lf %lf", &num2.real, &num2.imag);//���̵Ǵ� ����ü2 ���� ���Ҽ� �Է�
	sum = complex_add(num1, num2);
	printf("���Ҽ� ��: %lf %lf\n", sum.real, sum.imag);// ����ü�� ���Ҽ��� ���
}