/*6 . 챕터 8_문제 11번
두 점 사이의 거리를 계산하는 함수를 작성하여 보자. 2차원 공간에서 두 점 (x1, y1)과(x2, y2) 사이의 거리를 계산하는 get_distance(double x1, double y1, double, x2. double y2)를 작성하라. 다음과 같은 두 점 사이의 거리를 계산하는 공식을 사용하라, 제곱근은 sqrt()라이브러리 함수를 사용하라.
Ex) 첫 번째 점의 좌표를 입력하세요 (x, y): 1 1
두 번째 점의 좌표를 입력하세요 (x, y): 10 10
두점 사이의 거리는 12.727922입니다.*/

#include <stdio.h>// 표준 입출력 사용을 위한 함수
#include <math.h>// 수학 라이브러리 사용을 위한 함수

double get_distance(double x1, double y1, double x2, double y2);//두 좌표사이의 거리를 구하는 함수

void main(void)
{
	double x1, y1, x2, y2;// 좌표값을 입력받기 위한 변수
	printf("첫 번째 좌표를 입력하세요 ");
	scanf_s("%lf %lf", &x1, &y1);// 첫 번째 좌표 입력
	printf("두 번째 좌표를 입력하세요 ");
	scanf_s("%lf %lf", &x2, &y2);// 두 번째 좌표 입력
	printf("두 좌표 사이의 거리는 %lf 입니다\n", get_distance(x1, y1, x2, y2));// 반환된 거리 값 출력
}

double get_distance(double x1, double y1, double x2, double y2)//두 좌표사이의 거리를 구하는 함수
{
	return sqrt(pow((x1 - x2), 2.0) + pow((y1 - y2), 2.0));// 두좌표사이의 거리를 구하는 공식을 통한 값 반환
}