/*5 . é�� 8_���� 10��
�ΰ��� ���� n, m�� �Է� �޾Ƽ� n�� m�� ����̸� 1�� ��ȯ�ϰ� �׷��� ������ 0�� ��ȯ�ϴ� �Լ� is_multiple (int n, int m)�� �ۼ��ϰ� �׽�Ʈ�Ͽ� ����
Ex) ù ��° ������ �Է� �Ͻÿ� : 30
�� ��° ������ �Է� �Ͻÿ� : 5
30�� 5�� ��� �Դϴ�.*/

#include <stdio.h>// ǥ������� �Լ� ����� ���� ���

int is_multiple(int n, int m); // ��������� ���θ� �Ǵ��ϴ� �Լ�

void main(void)
{
	int number1, number2;// ������ �Է¹ޱ� ���� ����
	printf("ù ��° ������ �Է� �ϼ��� ");
	scanf_s("%d", &number1);// ù ��° ���� �Է�
	printf("�� ��° ������ �Է� �ϼ��� ");
	scanf_s("%d", &number2);// �� ��° ���� �Է�
	if (is_multiple(number1, number2) == 1)// �� ���� ��� �ϰ��
		printf("%d�� %d�� ��� �Դϴ� \n", number1, number2);
	else// �� ���� ����� �ƴҰ��
		printf("%d�� %d�� ����� �ƴմϴ� \n", number1, number2);
}

int is_multiple(int n, int m)// ��������� ���θ� �Ǵ��ϴ� �Լ�
{
	return (n % m == 0) ? 1 : 0; // �Է¹��� ������ ����� ��� 1��ȯ �ƴ� ��� 0 ��ȯ
}