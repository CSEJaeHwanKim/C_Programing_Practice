//421p 14번문제
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int count_max = 100000; // 벌레가 이동하는 최대 이동 횟수

int main(void)
{
	int n, m; //2차원 배열의 행 과 열 변수
	int i;  // 반복문 사용을 위한 변수
	int **tile; //벌레가 이동하는 2차원 배열로 크기를 사용자 지정(동적할당)을 위해 다중 포인터 사용
	int x, y; //다중 반복문을 사용을 위한 변수
	int remain; // 2차원 배열중 벌레가 지나가지 않는 지역이 있나 확인하기 위한 변수
	int direction; // 벌레가 이동하는 방향
	int start_x, start_y; // 벌래의 시작 위치
	int count = 0; // 총 몇번의 이동을 하였는지 세는 변수

	srand(time(NULL)); // 벌레가 이동하는 방향을 랜덤으로 선택하기위해 사용되는 난수 활용
	printf("배열의 행의 크기를 입력하세요 ");
	scanf("%d", &n);
	printf("배열의 열의 크기를 입력하세요 ");
	scanf("%d", &m);

	tile =(int**) malloc(sizeof(int*) * n); // 사용자가 임의로 2차원 배열의 크기를 동적할당을 통해 지정
	for(i = 0; i < n; i++)
	{
		tile[i]= (int*) malloc (sizeof(int) * m); 
	}

	for(x = 0; x < n; x++) // 2차원 배열을 전체 0으로 초기화
	{
		for(y = 0; y < m ; y++)
		{
			tile[x][y] = 0;
		}
	}
	start_x = n / 2; //벌레의 시작 행
	start_y = m / 2; //벌레의 시작 열
	tile[start_x][start_y] = 1; // 벌레의 맨처음 위치는 이미 지나왔기 때문에 1로 초기화

	while(1) // 벌레가 전부 지나 갈때까지 계속 무한 반복 전부 지나 가면 총횟수를 출력
	{
		for(x = 0; x < n; x++)// 2차원 배열 출력(벌레가 지나가면 1로 않지나갔을 경우 0으로 출력)
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
		remain = 0; // 벌레가 지나 갔을경우 1로 바뀌므로 전제가 1일경우 작업을 끝나는것을 확인하기 위해 0으로 초기화
		for(x = 0; x < n; x++)//벌레가 지나갔으경우 +1
		{
			for(y = 0; y < m ; y++)
			{
				if(tile[x][y]==1)
					remain++;
			}
		}
		if(remain == n * m) // 전부 1인것은 2차원 행열의 곱의 크기와 같기 때문에 그것을 넘을 경우 작업을 마친다.
		{
			printf("총 %d번, 벌레가 이동하였습니다\n ", count);
			break;
		}
		if(count > count_max) // 벌레가 움직일수 있는 최대 이동횟수 제한
		{
			printf("벌레가 움직일수 있는 최대 이동수를 넘었습니다.\n ");
			break;
		}
		direction = rand() % 8;// 벌레가 움직이는 방행은 3*3에서 자신을 제외한 총 8방향으로 이동할수 있다. 이를 난수로 랜덤하게 이동한다.
		switch (direction)
		{
			case 0://난수가 0일경우 12시 방향으로 이동 1로 초기화
				if(start_x == 0)break;
				tile[start_x--][start_y] = 1;
				count++;
				break;
			case 1://난수가 1일경우 1시 방향으로 이동후 1로 초기화
				if(start_x == 0 || start_y == m - 1)break;
				tile[start_x--][start_y++] = 1;
				count++;
				break;
			case 2://난수가 2일경우 3시 방향으로 이동후 1로 초기화
				if(start_y == m - 1)break;
				tile[start_x][start_y++] = 1;
				count++;
				break;
			case 3://난수가 3일경우 5시 방향으로 이동후 1로 초기화
				if((start_x == n - 1) || (start_y == m - 1))break;
				tile[start_x++][start_y++] = 1;
				count++;
				break;
			case 4://난수가 4일경우 6시 방향으로 이동후 1로 초기화
				if(start_x == n - 1)break;
				tile[start_x++][start_y] = 1;
				count++;
				break;
			case 5://난수가 5일경우 7시 방향으로 이동후 1로 초기화
				if((start_x == n - 1) || start_y == 0)break;
				tile[start_x++][start_y--] = 1;
				count++;
				break;
			case 6://난수가 6일경우 9시 방향으로 이동후 1로 초기화
				if(start_y == 0)break;
				tile[start_x][start_y--] = 1;
				count++;
				break;
			case 7://난수가 7일경우 11시 방향으로 이동후 1로 초기화
				if(start_x ==0 || start_y == 0)break;
				tile[start_x--][start_y--] = 1;
				count++;
				break;
		}
		//Sleep(500);// 0.5초 간격으로 2차원 배열 출력화면 초기화
		system("cls");
	}
	for(i = 0; i < n; i++)//동적할당 해제
	{
		free(tile[i]); 
	}
	free(tile);
	return 0;
}


