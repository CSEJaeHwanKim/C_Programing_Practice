//372p 8������
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100 //�迭�� ũ�� ����
int Max(int *arr); // �迭�� ���� ���� ���

int main(void)
{
	int a[ARRAY_SIZE]; // 100�ǰ��� 0~9������ ������ �����ϱ� ���� �迭
	int b[10]; // 0~9������ �迭�� ��� Ƚ���� count�ϱ� ���� �迭
	int x = 0;
	int y = 0;
	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;// ������ 0~9������ ��µǴ� ������ count�� �������� ������
	int i;// �ݺ����� ���Ǵ� ����
	for(i = 0; i < ARRAY_SIZE; i++ )
	{
		a[i] = rand() % 10;// ���� ����
		printf("%d ��° �迭�� ����ִ� ���� %d �Դϴ�.\n",i, a[i]);
		if(a[i] == 0) //0�� Ƚ�� count
		{
			count0 += 1;
			b[0] = count0;
		}
		if(a[i] == 1)//1�� Ƚ�� count
		{
			count1 += 1;
			b[1] = count1;
		}
		if(a[i] == 2)//2�� Ƚ�� count
		{
			count2 += 1;
			b[2] = count2;
		}
		if(a[i] == 3)//3�� Ƚ�� count
		{
			count3 += 1;
			b[3] = count3;
		}
		if(a[i] == 4)//4�� Ƚ�� count
		{
			count4 += 1;
			b[4] = count4;
		}
		if(a[i] == 5)//5�� Ƚ�� count
		{
			count5 += 1;
			b[5] = count5;
		}
		if(a[i] == 6)//6�� Ƚ�� count
		{
			count6 += 1;
			b[6] = count6;
		}
		if(a[i] == 7)//7�� Ƚ�� count
		{
			count7 += 1;
			b[7] = count7;
		}
		if(a[i] == 8)//8�� Ƚ�� count
		{
			count8 += 1;
			b[8] = count8;
		}
		if(a[i] == 9)//9�� Ƚ�� count
		{
			count9 += 1;
			b[9] = count9;
		}
	}
	 
	for(x = 0; x < 10; x++)// ���� ���� Ƚ���� ����ϱ� ���� y
	{
		if(b[x] == Max(b))
			y = x;
	}
	printf("���� ���� ��µǴ� ���� %d�Դϴ�\n",y);
	printf("�� %d�� ���ɴϴ�\n",Max(b));
	return 0;
}
int Max(int *arr) //�迭�� �ִ��� �����ϱ� ���� �迭
{
	int i=0;
	int max = arr[0];// �ִ� �񱳸� ���� ��ó���� max���� �迭�� ù��° ���� ����
	for(i = 0; i < 10; i++)
	{
		if(max < arr[i]) // �迭�� ����Ǿ� �ִ� ���� ������ max������ Ŭ���
		{
			max = arr[i];//max�� ����
		}
	}
	return max;//max�� ��ȯ
}