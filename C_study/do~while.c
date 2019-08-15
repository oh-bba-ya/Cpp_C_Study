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


//음의 정수가 입력되기 전까지 입력받은 정수의 합

#include <stdio.h>

int main(void)
{
	int x, sum=0;

	do
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &x);
		sum = sum + x;
	} while (x > 0);

	printf("입력한 정수의 합은 %d입니다.\n", sum);
	return 0;
}
