//421p 14������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int count_max = 100000; // ������ �̵��ϴ� �ִ� �̵� Ƚ��

int main(void)
{
	int n, m; //2���� �迭�� �� �� �� ����
	int i;  // �ݺ��� ����� ���� ����
	int **tile; //������ �̵��ϴ� 2���� �迭�� ũ�⸦ ����� ����(�����Ҵ�)�� ���� ���� ������ ���
	int x, y; //���� �ݺ����� ����� ���� ����
	int remain; // 2���� �迭�� ������ �������� �ʴ� ������ �ֳ� Ȯ���ϱ� ���� ����
	int direction; // ������ �̵��ϴ� ����
	int start_x, start_y; // ������ ���� ��ġ
	int count = 0; // �� ����� �̵��� �Ͽ����� ���� ����

	srand(time(NULL)); // ������ �̵��ϴ� ������ �������� �����ϱ����� ���Ǵ� ���� Ȱ��
	printf("�迭�� ���� ũ�⸦ �Է��ϼ��� ");
	scanf("%d", &n);
	printf("�迭�� ���� ũ�⸦ �Է��ϼ��� ");
	scanf("%d", &m);

	tile =(int**) malloc(sizeof(int*) * n); // ����ڰ� ���Ƿ� 2���� �迭�� ũ�⸦ �����Ҵ��� ���� ����
	for(i = 0; i < n; i++)
	{
		tile[i]= (int*) malloc (sizeof(int) * m); 
	}

	for(x = 0; x < n; x++) // 2���� �迭�� ��ü 0���� �ʱ�ȭ
	{
		for(y = 0; y < m ; y++)
		{
			tile[x][y] = 0;
		}
	}
	start_x = n / 2; //������ ���� ��
	start_y = m / 2; //������ ���� ��
	tile[start_x][start_y] = 1; // ������ ��ó�� ��ġ�� �̹� �����Ա� ������ 1�� �ʱ�ȭ

	while(1) // ������ ���� ���� �������� ��� ���� �ݺ� ���� ���� ���� ��Ƚ���� ���
	{
		for(x = 0; x < n; x++)// 2���� �迭 ���(������ �������� 1�� ���������� ��� 0���� ���)
		{
			for(y = 0; y < m ; y++)
			{
				if(tile[x][y] == 1)
					printf(" 1 ");
				else
					printf(" 0 ");
			}
			printf("\n");
		}
		remain = 0; // ������ ���� ������� 1�� �ٲ�Ƿ� ������ 1�ϰ�� �۾��� �����°��� Ȯ���ϱ� ���� 0���� �ʱ�ȭ
		for(x = 0; x < n; x++)//������ ����������� +1
		{
			for(y = 0; y < m ; y++)
			{
				if(tile[x][y]==1)
					remain++;
			}
		}
		if(remain == n * m) // ���� 1�ΰ��� 2���� �࿭�� ���� ũ��� ���� ������ �װ��� ���� ��� �۾��� ��ģ��.
		{
			printf("�� %d��, ������ �̵��Ͽ����ϴ�\n ", count);
			break;
		}
		if(count > count_max) // ������ �����ϼ� �ִ� �ִ� �̵�Ƚ�� ����
		{
			printf("������ �����ϼ� �ִ� �ִ� �̵����� �Ѿ����ϴ�.\n ");
			break;
		}
		direction = rand() % 8;// ������ �����̴� ������ 3*3���� �ڽ��� ������ �� 8�������� �̵��Ҽ� �ִ�. �̸� ������ �����ϰ� �̵��Ѵ�.
		switch (direction)
		{
			case 0://������ 0�ϰ�� 12�� �������� �̵� 1�� �ʱ�ȭ
				if(start_x == 0)break;
				tile[start_x--][start_y] = 1;
				count++;
				break;
			case 1://������ 1�ϰ�� 1�� �������� �̵��� 1�� �ʱ�ȭ
				if(start_x == 0 || start_y == m - 1)break;
				tile[start_x--][start_y++] = 1;
				count++;
				break;
			case 2://������ 2�ϰ�� 3�� �������� �̵��� 1�� �ʱ�ȭ
				if(start_y == m - 1)break;
				tile[start_x][start_y++] = 1;
				count++;
				break;
			case 3://������ 3�ϰ�� 5�� �������� �̵��� 1�� �ʱ�ȭ
				if((start_x == n - 1) || (start_y == m - 1))break;
				tile[start_x++][start_y++] = 1;
				count++;
				break;
			case 4://������ 4�ϰ�� 6�� �������� �̵��� 1�� �ʱ�ȭ
				if(start_x == n - 1)break;
				tile[start_x++][start_y] = 1;
				count++;
				break;
			case 5://������ 5�ϰ�� 7�� �������� �̵��� 1�� �ʱ�ȭ
				if((start_x == n - 1) || start_y == 0)break;
				tile[start_x++][start_y--] = 1;
				count++;
				break;
			case 6://������ 6�ϰ�� 9�� �������� �̵��� 1�� �ʱ�ȭ
				if(start_y == 0)break;
				tile[start_x][start_y--] = 1;
				count++;
				break;
			case 7://������ 7�ϰ�� 11�� �������� �̵��� 1�� �ʱ�ȭ
				if(start_x ==0 || start_y == 0)break;
				tile[start_x--][start_y--] = 1;
				count++;
				break;
		}
		//Sleep(500);// 0.5�� �������� 2���� �迭 ���ȭ�� �ʱ�ȭ
		system("cls");
	}
	for(i = 0; i < n; i++)//�����Ҵ� ����
	{
		free(tile[i]); 
	}
	free(tile);
	return 0;
}


