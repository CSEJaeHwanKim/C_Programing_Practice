#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <string.h>

typedef struct// ������ ����, ����, ��������, �з�, ������ ������ ���� ����ü ����
{
	char title[100];//����
	char singer[100];//����
	char save_point[100];// ���� ���
	char group[100];//�з�
	int number;//����
} Music;

void Print_Menu(void);//�޴��� ����ϱ� ���� �Լ�
void add_Menu(Music *list);// ������ �߰��ϱ� ���� �Լ�
void search_Menu(Music *list);// ����� �������� �޴��� ã�� ���� �Լ�
void delete(Music *list);// ����� �������� ������ �����ϱ� ���� �Լ�
void Print(Music *list);// ����� ���� ����� ���

int num = 0;//����ü ������ �ε��� ������ ����

void main(void)
{
	Music music[100];// ���� ����ü �迭 ����
	int n;// �޴��� �����ϰ����ϴ� �Լ� ��ȣ�� �Է�
	while (1)
	{
		Print_Menu();// �޴� ���
		printf("�޴��� �����ϼ��� ");
		scanf_s("%d", &n);// �޴� ��ȣ �Է�
		while (getchar() != '\n');// �Է� ���۸� ���� �۾� ����
		switch (n)//�޴���ȣ �Է¿���
		{
		case 1://1�� ��� ���� �߰�
			add_Menu(music);
			break;
		case 2://2�ϰ�� ����� ���� ��� ���
			Print(music);
			break;
		case 3://3�� ��� ����� ���� ��Ͽ��� ������ Ž��
			search_Menu(music);
			break;
		case 4://4�� ��� ����� ���� ��Ͽ��� ������ ���� 
			delete(music);
			break;
		case 5://5�ϰ�� ���α׷� ����
			exit(1);
		default:// 1~5���̿��� ���� �Է½� �߸��� �Է����� �ٽ� ó������ ���ư��� �۾� ����
			printf("�߸��� �Է� �Դϴ� �ٽ� �Է� ���ּ���\n");
			continue;
		}
		system("pause");//cmdâ�� ������ �ϱ� ���� ���
		system("cls");
		while (getchar() != '\n');// �Է¹��۸� ���� ���� ���
	}
	
}
void Print_Menu(void)// �޴� ��� �Լ�
{
	printf("================\n");
	printf("1. �߰�(add)\n");
	printf("2. ���(print)\n");
	printf("3. �˻�(search)\n");
	printf("4. ����(delete)\n");
	printf("5. ����(exit)\n");
	printf("================\n");
}

void add_Menu(Music *list)// ���� ��� �߰�
{
	printf("������ �Է��ϼ��� ");
	gets(list[num].title);
	printf("������ �Է��ϼ��� ");
	gets(list[num].singer);
	printf("����� ��ġ�� �Է��ϼ��� ");
	gets(list[num].save_point);
	printf("�з��� �Է��ϼ���(����, ��, Ŭ����, ��ȭ����) ");
	gets(list[num].group);
	printf("������ �Է��ϼ��� ");
	scanf_s("%d", &(list[num].number));
	num++;
}

void search_Menu(Music *list)// ���� Ž��
{
	int i, result;
	char song[100];//ã�����ϴ� ������ ���� ����

	printf("ã�� ���� ������ �Է��ϼ��� ");
	gets(song);//ã�����ϴ� ������ ���� �Է�

	for (i = 0; i < num; i++)
	{
		result = strcmp(song, list[i].title);//ã�����ϴ� ������ ������ ���Ͽ� ����� ��Ͽ� �ִ��� ��
		if (result == 0)// 0�ϰ�� ��Ͽ� ã���� �ϴ� ����� �����Ѵ�
		{
			printf("������ %s�Դϴ�\n", list[i].title);
			printf("������ %s�Դϴ�\n", list[i].singer);
			printf("����� ��ġ�� %s�Դϴ�\n", list[i].save_point);
			printf("�з��� %s�Դϴ�\n", list[i].group);
			printf("����:�� %d�Դϴ�\n", list[i].number);
			break;
		}
	}
	if(result != 0)// 0�� �ƴҰ�� ��Ͽ� ã���� �ϴ� ����� ����.
		printf("ã���ô� �뷡�� �����ϴ�. \n");
}

void delete(Music *list)// ���� ��Ͽ��� ���� �ϰ��� �ϴ� ����
{
	int i, result, number, find = 0;
	char song[100];

	printf("������ ���� ������ �Է� ���ּ��� ");
	gets(song);// �����ϰ��� �ϴ� ������ ������ �Է�

	for (i = 0; i< num; i++)
	{
		result = strcmp(song, list[i].title);//ã�����ϴ� ������ ������ ���Ͽ� ����� ��Ͽ� �ִ��� ��
		if (result == 0)// 0�ϰ�� ��Ͽ� ã���� �ϴ� ����� �����Ѵ�
		{
			number = i;
			find = 1;// ã�°� �ִٴ� flag ���� ����
			break;
		}
	}
	if (find == 1)//ã�� ������ �ִ�.
	{
		for (i = number; i < num - 1; i++)// ã�� ������ �ڷḦ �����.
		{
			strcpy_s(list[i].title, 100, list[i + 1].title);
			strcpy_s(list[i].singer, 100, list[i + 1].singer);
			strcpy_s(list[i].save_point, 100, list[i + 1].save_point);
			strcpy_s(list[i].group, 100, list[i + 1].group);
			list[i].number = list[i + 1].number;
		}
		num--;
	}
}

void Print(Music *list)// ����� ������ ����� ���
{
	int i;

	printf("����� ���� �� %d�� �Դϴ�.\n", num);
	for (i = 0; i < num; i++)
	{
		printf("����: %s\n", list[i].title);
		printf("����: %s\n", list[i].singer);
		printf("����� ��ġ: %s\n", list[i].save_point);
		printf("�з�: %s\n", list[i].group);
		printf("����: %d\n", list[i].number);
		printf("\n");
	}
}