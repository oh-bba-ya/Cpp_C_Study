#include <stdio.h>

int main(void)
{
	int i, sum;
	i = 1;
	sum = 0;

	do                              //do 안에 있는 문장을 한번 실행하고 나서 while안에 있는 조건식을 비교.
	{                               //반복문안에 있는 문장을 최소한 한번 실행하고자 할때 유용하다.
		sum += i;
		i++;
	} while (i <= 10);                      //마지막에 세미콜론 잊지말자.

	printf("1부터 10까지의 합은 %d입니다.", sum);
	return 0;
}
