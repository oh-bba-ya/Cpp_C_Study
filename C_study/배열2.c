//실수형 배열.

#include <stdio.h>

int main(void)
{
	double x[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	int i = 0;
	for (i = 0; i < 5; i++) printf("%.1f\n", x[i]);
	return 0;
}


//다차원배열.
#include <stdio.h>

int main(void)
{
	int a[2][3] = { {10,20,50},{20,30,40} };		//{국어,영어,수학}.
	int i = 0, j = 0;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
	return 0;
}
