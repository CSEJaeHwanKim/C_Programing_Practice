#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 52 // �� ī���� ��

typedef struct// ī���� ���ڿ�, ���ĺ� ���ڸ� ���� ����ü
{
	int value;
	char suit;
}card;

void main(void)
{
	card Card[MAX_SIZE];// ī�带 ���� ����ü �迭

	int suit_rand, value_rand;// ī���� ������ ������ ���� ����
	int i, j;// �ݺ����� ����� ���� ����
	int count = 0;// ����ü �迭�� �ε��� ������ ���� ����
	char shape[4] = { 'c','d','h','s' };// ī���� ���ĺ�

	printf("�ʱ�ȭ��\n");
	for (i = 0;i < 4; i++)// ���� �ݺ����� ����Ͽ� 52���� ī�带 ����ü �迭�� ���ĺ��� ���ڸ� �Է��Ѵ�.
	{
		for (j = 1;j <= 13; j++)
		{
			Card[count].value = j;
			Card[count].suit = shape[i];
			count++;
		}
	}
	for (i = 0; i < MAX_SIZE; i++) // �Էµ� ī�带 ���
	{
		printf("%d%c ", Card[i].value, Card[i].suit);
		if ((i + 1) % 13 == 0)
			printf("\n");
	}
	printf("\n");

	srand((unsigned)time(NULL));// ������ ���� �����Ͻ� ���� �ٸ� ���ڸ� ����ϱ� ���� ���
	
	count = 0;
	printf("������\n");

	for (i = 0; i < 4; i++)// ���� �ݺ����� ����Ͽ� ���� �� ���� ������ �����Ѵ�.
	{
		for (j = 1; j <= 13; j++)
		{
			suit_rand = rand() % 3;
			value_rand = rand() % 13 + 1;
			Card[count].value = value_rand;
			Card[count].suit = shape[suit_rand];
			count++;
		}
	}

	for (i = 0; i < MAX_SIZE; i++)// ����ü�迭�� ����� ī�带 ����Ѵ�.
	{
		printf("%d%c ", Card[i].value, Card[i].suit);
		if ((i + 1) % 13 == 0)
			printf("\n");
	}
}

