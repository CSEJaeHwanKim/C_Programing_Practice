/*2 . é�� 9_���� 4��
������ ���� ���� ������ ����ϴ� ��ȯ���� ���α׷��� �ۼ��϶�.
1/1+1/2+1/3��..1/n*/

#include <stdio.h> // ǥ�� ����� �Լ� ����� ���� ���

void main(void)
{
	double denominator = 1.0; // �и� �Ǵ� ����
	double numerator; // ������ ������ �Ǵ� ����
	double sum = 0, numerator_input; // �հ� ������ ���� ū ���� �Ǵ� ����

	printf("�Ǽ��� �Է��ϼ��� ");
	scanf_s("%lf", &numerator_input);// ������ ���� �Է�

	for (numerator = 1.0; numerator <= numerator_input; numerator++) // ���ڴ� 1���� numerator_input���� 1�� ���� 
	{
		sum += denominator / numerator; // �м��� ��
	}
	printf("%lf\n", sum); // �������� ���� ���
}