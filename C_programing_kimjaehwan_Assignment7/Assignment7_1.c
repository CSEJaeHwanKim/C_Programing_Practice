#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000// �Է¹޴� ���ڿ��� �ִ� ũ��

struct mail
{
	char title[MAX];// ������ ����
	char sender[MAX];// ������ ������ ���
	char receiver[MAX];// ������ �޴� ���
	char content[MAX];// ������ ����
	char date[MAX];// ������ ������ ��¥
	int priority;// �켱����
};

void main(void)
{
	struct mail mail;// ����ü ����
	printf("������ �Է��ϼ��� ");
	fgets(mail.title, sizeof(mail.title), stdin);// ���ڿ� ���� �Է�
	printf("������ ����� �Է��ϼ��� ");
	fgets(mail.sender, sizeof(mail.sender), stdin);// ���ڿ� ������ ��� �Է�
	printf("�޴� ����� �Է��ϼ��� ");
	fgets(mail.receiver, sizeof(mail.receiver), stdin);// ���ڿ� �޴� ��� �Է�
	printf("������ �Է��ϼ��� ");
	fgets(mail.content, sizeof(mail.content), stdin);// ���ڿ� ���� �Է�
	printf("��¥�� �Է��ϼ��� ");
	fgets(mail.date, sizeof(mail.date), stdin);// ���ڿ� ��¥ �Է�
	printf("�켱 ������ �Է��ϼ��� ");
	scanf_s("%d", &mail.priority);// �켱���� �Է�
	printf("\n");
	printf("���� : %s", mail.title);// ������ ���� ���
	printf("������ ��� : %s", mail.sender);// ������ ������ ��� ���
	printf("�޴� ��� : %s", mail.receiver);// ������ �޴� ��� ���
	printf("���� ���� : %s", mail.content);// ������ ���� ���
	printf("���� ��¥ : %s", mail.date);// ������ ��¥ ���
	printf("�켱 ���� : %d\n", mail.priority);// ������ �켱���� ���
}