//for문 2개를 중첩해서 구구단 출력하자.

#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

}


//while문과 for문을 중첩시켜 구구단을 구해보자.
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
