//문제: x가 y 보다 크면 z=3 ,x가 y보다 작거나 같으면 z=2.

#include <stdio.h>

int main()
{
	int x = 3;
	int y = 2;
	int z;

	z = x > y ? (z = x) : (z = y);
	printf("%d", z);
}

//문제2:x와y중 큰값을 반환.

#include <stdio.h>

int main()
{
	int x = 3;
	int y = 2;
	int z;
	z = x > y ? x : y;
	printf("%d", z);
}
