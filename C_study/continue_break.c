//break문은 현재 사용준인 반복문을 조건문과 관계없이 모두 중단할 때 사용한다.
//사용예
#include <stdio.h>

int main(void)
{
	int i, j;
	i = 2;
	while (i < 10)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		i++;
	}
}
