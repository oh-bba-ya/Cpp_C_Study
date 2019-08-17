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
