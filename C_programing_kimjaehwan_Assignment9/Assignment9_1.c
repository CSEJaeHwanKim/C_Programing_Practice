#include <stdio.h>

void set_max_ptr(int m[], int size, int **pmax);// �ִ��� �����ϴ� �Լ�

void main(void)
{
	int m[6] = {5,6,10,3,7,9};// �迭
	int *pmax;// �ִ� ����
	int i;
	for (i = 0; i < 6; i++)// �迭�� ����ȼ� ���
	{
		printf("�迭 %d: %d \n",i+1, m[i]);
	}
	printf("\n");
	set_max_ptr(m,6,&pmax);// �ִ��� �����ϴ� �Լ�
	printf("Max: %d \n", *pmax);// �ִ� ���
}

void set_max_ptr(int m[], int size, int **pmax)// �ִ��� �����ϴ� �Լ�
{
	int temp, i;
	temp = m[0];// ��ó�� ���� ����
	for(i = 0; i < size; i++)// �ִ� �Ǻ�
	{
		if(temp < m[i])
			temp = m[i];
	}
	*pmax = &temp;// �ִ� ������ ����
}