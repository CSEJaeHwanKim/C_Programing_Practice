#include <stdio.h>
#include <stdlib.h>

void Pay(int *A, int *B, int *C, int human);// ���ް� ���ʽ��� ���� ȸ��� ������ ���ӱ��� ����ϱ� ���� �Լ�

int main(void)
{
	int human; // ������ ���� �Է¹ޱ� ���� ����
	int *A, *B, *C; // �迭�� ũ�⸦ �������� �Ҵ� �ޱ� ���� ������ ���� ���
	int month_pay, bonus; // ���ް� ���ʽ��� �Է¹ޱ� ���� ����
	int i, j;// �ݺ����� ����ϱ� ���� ����

	printf("���� ���� �Է��ϼ��� ");
	scanf("%d", &human);// ȸ����� ���� �Է�
	printf("\n");

	A = (int *)malloc (sizeof(int)*human);// ������ �����ϴ� A �迭�� �����Ҵ�
	for(i = 0; i < human; i++)//A�迭�� ������ �ε��� ������� ����
	{
		printf("����%d �� ������ �Է��ϼ��� ", i+1);
		scanf("%d", &month_pay);
		A[i] = month_pay;
	}
	printf("\n");

	B = (int *)malloc (sizeof(int)*human);// ������ �����ϴ� B �迭�� �����Ҵ�
	for(j = 0; j < human; j++)//B�迭�� ���ʽ��� �ε��� ������� ����
	{
		printf("����%d �� ���ʽ��� �Է��ϼ��� ", j+1);
		scanf("%d", &bonus);
		B[j] = bonus;
	}
	printf("\n");

	C = (int *)malloc (sizeof(int)*human);

	Pay(A, B, C, human);// ������ �ݾ��� ����ϴ� �Լ�

	return 0;
}

void Pay(int *A, int *B, int *C, int human)// ������ �ݾ��� ����ϴ� �Լ�
{
	int i;// �ݺ����� ����ϱ� ���� ����
	for(i = 0; i < human; i++)//�ε��� ���� �� �ӱ� ���
	{
		C[i] = A[i] + B[i];
		printf("����%d : %d \n",i+1, C[i] );
	}
	printf("\n");
}