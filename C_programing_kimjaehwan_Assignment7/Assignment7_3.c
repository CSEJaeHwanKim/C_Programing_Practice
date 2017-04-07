#include <stdio.h>
#include <stdlib.h>
typedef struct // typedef를이용한 구조체 이름 명시
{
	int type;
	union// 공용체 선언
	{
		struct{int base, height;} tri;// 삼각형의 밑변과 높이 구조체
		struct{int width, height;} rect;// 사각형의 가로와 세로의 구조체
		struct{int radius;} circ; // 원의 반지름
	}data;
}shape;

void main(void)
{
	shape shape;// typedef를통해 struct 생략 가능 
	int number;// 도형을 선택하는 번호 입력을 위한 변수
	while (1)
	{
		printf("도형을 선택하세요(1. 삼각형, 2. 사각형, 3. 원, 4. 프로그램종료) ");
		scanf_s("%d", &number);// 도형을 뜻하는 숫자 입력

		switch (number)//1은 삼각형, 2는 사각형, 3은 원, 4는 프로그램종료의 기능 수행
		{
			case 1:
				printf("삼각형의 밑변 : ");    scanf_s("%d", &shape.data.tri.base);// 삼각형의 밑변 입력
				printf("삼각형의 높이 : ");    scanf_s("%d", &shape.data.tri.height);// 삼각형의 높이 입력
				break;
			case 2:
				printf("사각형의 가로 : ");    scanf_s("%d", &shape.data.rect.width);// 사각형의 가로 입력
				printf("사각형의 세로 : ");    scanf_s("%d", &shape.data.rect.height);// 사각형의 세로 입력
				break;
			case 3:
				printf("원의 반지름 : ");    scanf_s("%d", &shape.data.circ.radius);// 원의 반지름 입력
				break;
			case 4:// 프로그램 종료시 삼각형과 사각형 원의 밑변, 높이, 반지름, 가로, 세로등의 값을 출력후 프로그램 종료
				printf("삼각형의 밑변 : %d\n", shape.data.tri.base);
				printf("삼각형의 높이 : %d\n", shape.data.tri.height);
				printf("사각형의 가로 : %d\n", shape.data.rect.width);
				printf("사각형의 세로 : %d\n", shape.data.rect.height);
				printf("원의 반지름 : %d\n", shape.data.circ.radius);
				exit(1);
				break;
			default:
				continue;
		}
	}
	
}