#include <stdio.h>
#include <malloc.h>

int array_equal(int *a, int *b, int size);

int main(void)
{
	int *a ;
	int *b; 
	int size;
	int i = 0;
	printf(" �迭�� ũ�⸦ �Է��ϼ���\n ");
	scanf("%d", &size);

	a = (int *)malloc(sizeof(int) * size);
	printf(" a�迭�� �Է��ϼ���\n");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	
	b = (int *)malloc(sizeof(int) * size);
	printf(" b�迭�� �Է��ϼ���\n");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &b[i]);
	}
	printf(" a�� b�� ���� �迭�� ������ 1 �ٸ��� 0�� ��ȯ�Ѵ�\n");
	if(array_equal(a,b,size) == 0)
	{
		printf(" ��ȯ���� %d���� ���� ���� �ε����� ��ġ�� �迭�� ���� �ٸ���\n",array_equal(a,b,size));
	}
	else if(array_equal(a,b,size) == 1)
	{
		printf(" ��ȯ���� %d���� ���� ���� �ε����� ��ġ�� �迭�� ���� ����\n",array_equal(a,b,size));
	}
	return 0;
}
int array_equal(int *a, int *b, int size)
{
	int i=0;
	for(i = 0; i < size; i++)
	{
		if( a[i] != b[i] )
		{
			return 0;
		}
	}
	return 1;
}
