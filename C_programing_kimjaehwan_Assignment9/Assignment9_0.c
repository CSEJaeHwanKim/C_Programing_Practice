#include <stdio.h>

void seclected_proverb(char **q, int n);// �ε����� ���� ����� ���ڿ��� ����ϴ� �Լ�

void main(void)
{
	int n;
	char *s;// �Լ����� ���õǴ� ���ڿ� �����ϴ� ������ ����
	printf("Enter number : ");
	scanf_s("%d", &n);// �����ϰ��� �ϴ� ���ڿ� ��ȣ
	printf("\n");
	seclected_proverb(&s,n);// �ε����� ���� ����� ���ڿ��� ����ϴ� �Լ�
	printf("seclected_proverb = %s\n\n",s);
}

void seclected_proverb(char **q, int n)// �ε����� ���� ����� ���ڿ��� ����ϴ� �Լ�
{
	static char *array[10]= //�ε����� ���� ���ڿ� �����ϴ� ������ �迭 
	{
		"1. A bad shearer never had a good sickle.",
		"2. A bad workman (always) blames his tools",
		"3. A bad workman quarrels with his tools",
		"4. A bad thing never dies",
		"5. ������ �㰡 ��� �㸻�� ���� ��´�",
		"6. �ұͿ� �� �б�",
		"7. �� �Ұ� �ܾ簣 ��ģ��",
		"8. �ݻ�÷ȭ",
		"9. ��������",
		"10. ������ ���Ա�"
	};
	int i;
	for (i = 0; i < 10; i++)// ����� ���ڿ� ���
	{
		printf("%s\n", array[i]);
	}
	printf("\n");
	*q = array[n-1];// ���õ� ���ڿ�
}









