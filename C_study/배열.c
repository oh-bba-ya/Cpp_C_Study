#include <stdio.h>

int main(void)
{
	int x[5], i;                        //x[5] = {0,1,2,3,4} 5개의 원소로 이루어진 크기가 5인 배열.
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &x[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", x[i]);
	}

	return 0;
}


//배열 초기화.
//배열을 선언할때 중괄호{}를 이용하여 배열초기화가 가능하다.
//크기가 5인 x의 배열에 요소를 3개만 넣는다면 나머지 뒤에는 '0'으로 표현된다.
#include <stdio.h>

int main(void)
{
	int i=0, x[5] = { 0,1,2};

	for (i = 0; i < 5; i++)
	{
		printf("%d", x[i]);
	}

	return 0;
}

//만일 모두 0으로 채우고 싶다면.
#include <stdio.h>

int main(void)
{
	int i=0, x[5] = { 0};

	for (i = 0; i < 5; i++)
	{
		printf("%d", x[i]);
	}

	return 0;
}
