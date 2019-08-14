//문제1
//변수 x가 0이하이면 x의값1증가
#include <stdio.h>

int main(void)
{
	int x;

	printf("x의 값을 입력하시오: ");
	scanf_s("%d", &x);
	if (x <= 0)
	{
		++x;
	}
	printf("x의 값은:%d", x);
}

//문제2
//x의 값을 입력받아 2의 배수인지 3의배수인지 5의배수인지 알아내는 프로그램을 작성하시오.
#include <stdio.h>

int main(void)
{
	int x;

	printf("x의 값을 입력하시오: ");
	scanf_s("%d", &x);
	if (x % 2==0)
	{
		printf("2의배수입니다.\n");
	}
	
	if (x % 3 == 0)
	{
		printf("3의 배수입니다.\n");
	}

	if (x % 5 == 0)
	{
		printf("5의 배수입니다.\n");
	}
}
