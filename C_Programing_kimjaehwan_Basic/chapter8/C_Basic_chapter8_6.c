/*1 . é�� 8_���� 6��
����(random number)�� ��ǻ�͸� �̿��� ���� �ذῡ�� ���� ���ȴ�, Ư�� �������� �м��� �ʹ� ������ ��쿡 �ùķ��̼��� ����ϸ� ������ ��ǰ�� �������� �ʰ����� ���� ������ �� �� �ִ�. ���־� C++�� ���, rand()�� �ѹ� ȣ��� ������ 0���� 32767������ ������ ���� Ȯ���� �����Ͽ� ��ȯ�Ѵ�. Rand()�Լ��� �̿��Ͽ� 0 �Ǵ� 1���� �������� ��ȯ�ϴ� �Լ� b_rand()�� �ۼ��ϰ� 5�� ȣ���Ͽ� ����.
Ex) 1 1 0 0 1.
�����*/

#include <stdio.h>//ǥ�� ������Լ��� ����ϱ� ���� ����
#include <stdlib.h>// ǥ�� ���̺귯�� �Լ��� ����ϱ� ���� ����
#include <time.h> // srand()�Լ��� �Ͽ��ϱ����� ����

void b_rand(void); //0 �Ǵ� 1�� ����ϴ� �Լ�

void main(void)
{
	b_rand();// �Լ� ȣ��
}

void b_rand(void)
{
	int random_number;// 0 �Ǵ� 1�� �����ϰ� �����ϴ� ����
	int i; // �ݺ����� ����� ���� ����
	srand((unsigned)time(NULL));//��� �� ������ ��ȭ�� ���ڸ� ����ϱ� ���� �Լ�
	for (i = 0; i < 5; i++)// �ݺ��� 5�� ����
	{
		random_number = rand() % 2;// 0 �Ǵ� 1�� ���� ����
		printf("%d ", random_number); //0�Ǵ� 1 ���
	}
	printf("\n");// ����
}