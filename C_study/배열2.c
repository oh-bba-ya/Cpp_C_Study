//실수형 배열.

#include <stdio.h>

int main(void)
{
	double x[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	int i = 0;
	for (i = 0; i < 5; i++) printf("%.1f\n", x[i]);
	return 0;
}
