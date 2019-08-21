//문제
//char a,b int i,j double x,y 의 변수들의 주소를 출력해보자.

#include <stdio.h>

int main(void)
{
	char a, b;
	int i, j;
	double x, y;

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &i);
	printf("%p\n", &j);
	printf("%p\n", &x);
	printf("%p\n", &y);

	return 0;
}
