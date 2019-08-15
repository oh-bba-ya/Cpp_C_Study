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


//continue문은 현재 반복을 중단하고 다음 조건 값에 대한 처리를 수행한다.
//continue문을 만나면 제어는 반복문의 마지막부분으로 전달되고 다음 반복 문장이 시작된다.
#include <stdio.h>

int main(void)
{
	int i;
	printf("1~10사이의 짝수만 출력합니다.\n");

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)				//짝수가 아닐경우.
		{
			continue;			//짝수가 아닐경우 continue를 통해 출력되지 않고 다음 숫자로 넘어가게 된다.
		}
		printf("\n%d", i);
	}
}
