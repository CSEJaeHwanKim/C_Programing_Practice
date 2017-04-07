/*2 . 챕터 9_문제 4번
다음과 같은 무한 수열을 계산하는 순환적인 프로그램을 작성하라.
1/1+1/2+1/3…..1/n*/

#include <stdio.h> // 표준 입출력 함수 사용을 위한 헤더

void main(void)
{
	double denominator = 1.0; // 분모가 되는 변수
	double numerator; // 분자의 범위가 되는 변수
	double sum = 0, numerator_input; // 합과 분자의 가장 큰 값이 되는 변수

	printf("실수를 입력하세요 ");
	scanf_s("%lf", &numerator_input);// 분자의 범위 입력

	for (numerator = 1.0; numerator <= numerator_input; numerator++) // 분자는 1부터 numerator_input까지 1씩 증가 
	{
		sum += denominator / numerator; // 분수의 합
	}
	printf("%lf\n", sum); // 최종적인 값을 출력
}