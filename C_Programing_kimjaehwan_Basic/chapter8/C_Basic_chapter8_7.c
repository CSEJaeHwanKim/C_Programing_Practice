/*2 . é�� 8_���� 7��
�տ��� �ۼ��� b_rand()�Լ��� �̿��Ͽ� ������ ���� ������ ������ �ùķ��̼��Ͽ� ����. ��ǻ�Ͱ� ������ ������ ����ڴ� �� �ڸ� ���Ѵ�. ��ǻ�ʹ� b_rand()�� �̿��Ͽ� ������ ������ 1�̸� ������ �ո����� �����ϰ� 0�̸� ������ �޸����� �����Ѵ�.
Ex) �ո� �Ǵ� �޸�(1 �Ǵ� 0): 1
�¾ҽ��ϴ�.
����Ͻðڽ��ϱ�? (y �Ǵ� n): n*/

#include <stdio.h>// ǥ�� ����� ����� ���� ���
#include <stdlib.h>// ǥ�� ���̺귯�� �Լ� ����� ���� ���
#include <time.h>// srand()�Լ� ����� ���� ���
#include <Windows.h>// ��ƿ��Ƽ �Լ� ����� ���� ���

int b_rand(void);//0 �Ǵ� 1�� ����ϴ� �Լ�

void main(void)
{
	int user_choice;// ������� 0�Ǵ� 1 ������ ���� ����
	char choice_continue;// ���α׷��� ����Ұ����� ���� �Ǵ��� ���� ����
	while (1)
	{
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf_s("%d", &user_choice);// ������� ������ �Է¹޴� ����
		while (getchar() != '\n');// scanf�� ����Կ� �־� ���۷� �ξ� ������ �ذ��ϱ� ���� ���۸� ����ش�.
		if (user_choice == b_rand())// ������� ���ð� ������ ���� ���ڰ� ���� ���
			printf("��ǻ���� ������ %d�� ������� ���ð� �¾ҽ��ϴ�\n", b_rand());
		else// ������� ���ð� ������ ���� ���ڰ� �ٸ� ���
			printf("��ǻ���� ������ %d�� ������� ���ð� Ʋ�Ƚ��ϴ�\n", b_rand());
		printf("����Ͻðڽ��ϱ�? (y �Ǵ� n): ");
		//scanf_s("%c", &choice_continue);
		choice_continue = getchar();// ���α׷��� ����Ұ������� ���� ���� �Ǵ�.
		system("cls");// cmdâ�� ȭ�鿡 ��µǾ� �ִ°��� �����ش�.
		if (choice_continue == 'n')// ����Ұ������� ���ο��� n�� ���������� ���α׷��� �����Ѵ�.
			break;
	}

}
int b_rand(void)//0 �Ǵ� 1�� ����ϴ� �Լ�
{
	int n; //�����Լ��� ���� ���� ����
	srand((unsigned)time(NULL)); // ����� �Ҷ����� �ٸ� ���ڷ� �ٲ��ִ� ��� ����
	n = rand() % 2; // 0�Ǵ� 1�� �����ϰ� n������ ����
	return n;// 0 �Ǵ� 1 ��ȯ
}