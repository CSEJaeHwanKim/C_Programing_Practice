/*4 . é�� 8_���� 9��
ȭ�鿡 ���η� ���� �׷����� �׸��� ���α׷��� �ۼ��Ͽ� ����. �μ��� ����ŭ�� ��ǥ ���ڸ� ����ϴ� �Լ� print_value(int n)�� �ۼ��϶�. �ݺ������� ����ڷκ��� ���� �Է� �޾Ƽ� print_value()�� ȣ���Ͽ� �Է� ����ŭ ���븦  �׸��� ���α׷��� �ϼ��϶�. ����ڰ� ������ �Է��ϸ� �ݺ��� �ߴ��϶�.
Ex) ���� �Է��ϼ���(����� ���� �Դϴ�): 5
*****
���� �Է��ϼ���(����� ���� �Դϴ�): -1*/

#include <stdio.h>// ǥ�� ������Լ� ����� ���� ���
#include <Windows.h>// ��ƿ��Ƽ �Լ� ����� ���� ���

void Print_value(int n);// ����ڿ��� �Է¹��� ����ŭ ������ ����� ���� �Լ�

void main(void)
{
	int star_number;// ���� �� �� ��� �Ұ����� �Է¹ޱ� ���� ����
	while (1)// ���� �ݺ��� ���
	{
		printf("���� �Է��ϼ��� (����� ���� �Դϴ�): ");
		scanf_s("%d", &star_number);// ���� ���� �Է�
		if (star_number < 0)// ������ �Է¹޾������ �ݺ��� ����
			break;
		else// ������ �ƴ� ����� �Է¹޾������ �Է¹��� ���ڸ�ŭ ������ ���
			Print_value(star_number);
		system("pause");// cmdâ �Ͻ����� ����
		system("cls");// cmdâ�� ����� ��� ����
	}
}

void Print_value(int n)// ����ڿ��� �Է¹��� ����ŭ ������ ����� ���� �Լ�
{
	int i;//�ݺ��� ����� ���� ����
	for (i = 0; i < n; i++)// �Է¹��� ����ŭ �ݺ��� ����
	{
		printf("*");// ������ ���
	}
	printf("\n");// ����
}