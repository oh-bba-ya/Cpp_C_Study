//문제
//max함수와 min함수를 작성하시오.
//int형 변수a,b.
//int 반환
#include <stdio.h>

int MAX(int a, int b)
{
	int c;
	c = a > b ? a : b;

	return c;
}

int MIN(int a, int b)
{
	int c;
	c = a < b ? a : b;
	return c;
}
