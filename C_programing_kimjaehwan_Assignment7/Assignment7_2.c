#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct food// ����ü ����
{
	char name[100];// ���� �̸�
	int calories;// ������ Į�θ�
};

void main(void)
{
	struct food food_array[3];// ����ü �迭 ����
	int i, j;// �ݺ��� ����� ���� ���� ����
	int result = 0;// ���� Į�θ� ����
	int c;// �Է¹��۸� ���� ���� ����

	for (i = 0; i < 3; i++)// �������� ������ �Է�
	{
		printf("������ �Է��ϼ��� ");
		fgets(food_array[i].name, sizeof(food_array[i].name), stdin);// ���ڿ� �Է��� ���� ������ �Է�
		printf("Į�θ��� �Է��ϼ��� ");
		scanf_s("%d", &food_array[i].calories);// Į�θ� �Է�
		printf("\n");
		while ((c = getchar()) != '\n'&&c != EOF);// �Է¹��۸� ���� ���� ���
	}
	for (j = 0; j < 3; j++)// ��Į�θ��� ���ϱ� ���� ��� Į�θ��� ���� ���Ѵ�.
	{
		result += food_array[j].calories;
	}
	printf("\n");
	printf("�� Į�θ��� %d �Դϴ� \n", result);// ��Į�θ� ���
}