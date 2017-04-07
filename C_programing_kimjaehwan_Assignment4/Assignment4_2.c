//421p 9������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_grade(int **arr,int number,int subject);// ���� �� �й��� ����ϱ� ���� �Լ�
void insert_grade(int **arr,int number,int subject); // �й� �� ������ ���踶�� ������ �����ϱ� ���� �Լ�
void max_grade(int **arr,int number,int subject); // ���� �� ���� ū ���� ����� ���� �Լ�
void min_grade(int **arr,int number,int subject); // ���� �� ���� ���� ���� ����� ���� �Լ�

void main(void)
{
	int i; //�ݺ��� ����
	int student_number; // �л��� ����
	int subject_number; // ����� ����
	int **arr;// �л����� ������� ���� ������ �����ϱ����� 2���� �迭�� ���� ���� ������
	printf("�л����� �Է��ϼ��� ");
	scanf("%d", &student_number);
	printf("������� �Է��ϼ��� ");
	scanf("%d", &subject_number);
	arr =(int**) malloc(sizeof(int*) * student_number);// 2���� �迭�� ũ�⸦ ����ڰ� �����ϱ� ���� �����Ҵ��� ���� ���� ������ ���� ���
	for(i=0; i<student_number; i++)
	{
		arr[i]= (int*) malloc (sizeof(int) *subject_number);// 2���� �迭�� ũ�� �����Ҵ�
	}
	insert_grade(arr,student_number,subject_number);//���� ����
	print_grade(arr,student_number,subject_number);// ���� ���
	max_grade(arr,student_number,subject_number);// �ִ� ���
	min_grade(arr,student_number,subject_number);// �ּڰ� ���
	for(i = 0; i < student_number; i++)// �����Ҵ� ����
	{
		free(arr[i]); 
	}
	free(arr);
}

void print_grade(int **arr,int number,int subject)// ���� �� �й� ����� ���� �Լ�
{
	int i, j;// 2���� �迭 ����� ���� ���� 
	int count = 1; // �й� ����� ���� ����
	printf("�й�, ����#1, ����#2, ����#3, ����#4, ����#5, ����#6, ����#7, ����#8, ����#9\n");//�й��� ��ġ�� ������ ������ ������ �˷��ֱ� ���� ���� ���̺�
	for(i = 0; i < number; i++)// �й� �� ���� ���
	{
		printf("  %d ", count++);
		for(j = 0; j < subject; j++)
		{
			printf(" %5d  ", arr[i][j]);
		}
		printf("\n");
	}

}
void insert_grade(int **arr,int number,int subject)// ���� ������ ���� �Լ�
{
	int i, j;
	srand(time(NULL));// ������ ������ ����
	for(i = 0; i < number; i++)// ������ ������ ����
	{
		for(j = 0; j < subject; j++)
		{
			arr[i][j] = rand()%101;// 0~100 ���� �� 101�ܰ�
		}
	}
}
void max_grade(int **arr,int number,int subject)// �ִ��� ����ϱ� ���� �Լ�
{
	int i, j;
	int max_point= arr[0][0];// �ִ� �񱳸� ���� ���� �� ���ʰ����� �ʱ�ȭ
	for(i = 0; i < number; i++)//�ִ� �� �� ����
	{
		for(j = 0; j < subject; j++)
		{
			if(max_point < arr[i][j])
			{
				max_point = arr[i][j];
			}
		}
	}
	printf("max: %d\n", max_point);//�ִ� ���
}
void min_grade(int **arr,int number,int subject)// �ּڰ��� ����ϱ� ���� �Լ�
{
	int i, j;
	int min_point= arr[0][0];// �ּڰ� �񱳸� ���� ���� �� ���ʰ����� �ʱ�ȭ
	for(i = 0; i < number; i++)//�ּڰ� �� �� ����
	{
		for(j = 0; j < subject; j++)
		{
			if(min_point > arr[i][j])
			{
				min_point = arr[i][j];
			}
		}
	}
	printf("min: %d\n", min_point);//�ּڰ� ���
}