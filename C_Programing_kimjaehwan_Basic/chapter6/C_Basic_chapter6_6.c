/*2 . é�� 6_���� 6��
����ڷκ��� �� �������� ���� �Է� �޾Ƽ� Jan�� ���� ���� �ܾ�� ����ϴ� �ҽ��� �ۼ��϶�
Ex) �� ��ȣ�� �Է� �Ͻÿ�(1~12): 12.
Dec*/

#include <stdio.h>

void main()
{
	int month_number;// �� ����

	printf(" ����ȣ�� �Է��ϼ��� ");
	scanf("%d", &month_number); //���� �Է� �޽��ϴ�

	switch (month_number)// ����ȣ�� ���մϴ�
	{
	case 1: //1���� ���� January ��� 
		printf(" January\n");
		break;
	case 2: //2���� ���� Fabuary ���
		printf(" Fabuary\n");
		break;
	case 3: //3���� ���� March ���
		printf(" March\n");
		break;
	case 4: //4���� ���� April ���
		printf(" April\n");
		break;
	case 5: //5���� ���� May ���
		printf(" May\n");
		break;
	case 6: // 6���� ���� June ��� 
		printf(" June\n");
		break;
	case 7: // 7���� ���� July ���
		printf(" July\n");
		break;
	case 8: // 8���� ���� August ���
		printf(" August\n");
		break;
	case 9: // 9���� ���� September ���
		printf(" September\n");
		break;
	case 10: // 10���� ���� October ��� 
		printf(" October\n");
		break;
	case 11: // 11���� ���� November ���
		printf(" November\n");
		break;
	case 12: // 12���� ���� December ���
		printf(" December\n");
		break;
	default: // �޿� ���� �߸��� �Է��Դϴ�
		printf(" �߸��� �Է��Դϴ�\n");
		break;
	}
}