#include <stdio.h>
#include <stdlib.h>
typedef struct // typedef���̿��� ����ü �̸� ���
{
	int type;
	union// ����ü ����
	{
		struct{int base, height;} tri;// �ﰢ���� �غ��� ���� ����ü
		struct{int width, height;} rect;// �簢���� ���ο� ������ ����ü
		struct{int radius;} circ; // ���� ������
	}data;
}shape;

void main(void)
{
	shape shape;// typedef������ struct ���� ���� 
	int number;// ������ �����ϴ� ��ȣ �Է��� ���� ����
	while (1)
	{
		printf("������ �����ϼ���(1. �ﰢ��, 2. �簢��, 3. ��, 4. ���α׷�����) ");
		scanf_s("%d", &number);// ������ ���ϴ� ���� �Է�

		switch (number)//1�� �ﰢ��, 2�� �簢��, 3�� ��, 4�� ���α׷������� ��� ����
		{
			case 1:
				printf("�ﰢ���� �غ� : ");    scanf_s("%d", &shape.data.tri.base);// �ﰢ���� �غ� �Է�
				printf("�ﰢ���� ���� : ");    scanf_s("%d", &shape.data.tri.height);// �ﰢ���� ���� �Է�
				break;
			case 2:
				printf("�簢���� ���� : ");    scanf_s("%d", &shape.data.rect.width);// �簢���� ���� �Է�
				printf("�簢���� ���� : ");    scanf_s("%d", &shape.data.rect.height);// �簢���� ���� �Է�
				break;
			case 3:
				printf("���� ������ : ");    scanf_s("%d", &shape.data.circ.radius);// ���� ������ �Է�
				break;
			case 4:// ���α׷� ����� �ﰢ���� �簢�� ���� �غ�, ����, ������, ����, ���ε��� ���� ����� ���α׷� ����
				printf("�ﰢ���� �غ� : %d\n", shape.data.tri.base);
				printf("�ﰢ���� ���� : %d\n", shape.data.tri.height);
				printf("�簢���� ���� : %d\n", shape.data.rect.width);
				printf("�簢���� ���� : %d\n", shape.data.rect.height);
				printf("���� ������ : %d\n", shape.data.circ.radius);
				exit(1);
				break;
			default:
				continue;
		}
	}
	
}