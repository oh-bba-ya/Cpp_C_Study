//문제 정수의 값을 입력받아 !(팩토리얼)을 구하시오.
#include <stdio.h>

int main(void)
{
	int i,fac;
	int x;
	fac = 1;
	printf("정수를 입력하세요: \n");
	scanf_s("%d", &x);
	
	for (i = 1; i <= x; i++)
	{
		fac = fac * i;
	}

	printf("입력하신 정수의 !의 값은 %d입니다", fac);
	return 0;

}
