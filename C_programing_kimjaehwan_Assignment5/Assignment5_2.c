#include <stdio.h>
#include <stdlib.h>

void array_print(int *A, int size); // �迭�� ����Ǿ� �ִ� ���� ����ϱ� ���� �Լ�

int main(void)
{
	int *arr; // �迭�� ũ�⸦ ����� ���Ǵ�� ���ϱ� ���� �����Ҵ��� ���� ������ ���� ���
	int arr_size; // �迭�� ũ�⸦ �Է¹ޱ� ���� ����ϴ� ����
	int arr_value; // �迭�� ���� ������ �Է¹ޱ� ���� ����ϴ� ����
	int i; // �ݺ����� ����ϱ� ���� ����
	printf("�迭�� ũ�⸦ �Է��ϼ��� ");
	scanf("%d", &arr_size);// �迭�� ũ�� �Է�
	
	arr = (int *)malloc(sizeof(int)*arr_size);// ������ ���������� �迭�� ũ�� �����Ҵ�
	for(i = 0;i < arr_size; i++)// �迭�� �����ϴ� ������ �ε��� ������ ����
	{
		printf("�迭�� �� ���� �Է��ϼ��� ");
	    scanf("%d", &arr_value);
		arr[i] = arr_value;
	}
	array_print(arr, arr_size);// �迭�� ����Ǿ� �ִ� ���� ����ϱ� ���� �Լ�
	return 0;
}
void array_print(int *A, int size)// �迭�� ����Ǿ� �ִ� ���� ����ϱ� ���� �Լ�
{
	int i;// �ݺ����� ����ϱ� ���� ���� ����
	printf(" arr = { ");// �迭�� ���
	for(i = 0; i < size; i++)// �迭�� �ε��� ������� ���
	{
		printf("%d ", A[i]);
	}
	printf("} \n");
}