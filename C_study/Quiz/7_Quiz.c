//사용자로부터 10개의 정수를 입력받으시오.
//입력받은 10개의 정수중 짝수는 짝수끼리 홀수는 홀수끼리 더하여 출력하시오.

#include <stdio.h>

int main(void)
{
	int i = 0, x[10];
	int even = 0, odd = 0;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &x[i]);

		if (x[i] % 2 == 0)
		{
			even += x[i];
		}

		if (x[i] % 2 != 0)
		{
			odd += x[i];
		}
	}

	printf("짝수합:%d\n", even);
	printf("홀수합:%d", odd);

	return 0;
}
