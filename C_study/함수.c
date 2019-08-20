//함수 호출순서를 확인해보자.

#include <stdio.h>

int add(int x, int y)
{
	int z = -1;
	printf("add start: x=%d, y=%d, z=%d\n", x, y, z);

	z = x + y;

	printf("add end: x=%d, y=%d, z=%d\n", x, y, z);
	return z;
}

int main()
{
	int c = 0;
	printf("main start: c=%d\n", c);

	c = add(3, 4); //함수 호출부.

	printf("main end: c=%d\n", c);
	return 0;
}


//함수 호출화면.
//main start: c=0
//add start: x=3, y=4, z=-1
//add end: x=3, y=4, z=7
//main end: c=7

//함수호출과정2
#include <stdio.h>

int add(int x, int y)
{
	int z = -1;
	printf("add start: x=%d, y=%d, z=%d\n", x, y, z);

	z = x + y;

	printf("add end: x=%d, y=%d, z=%d\n", x, y, z);
	return z;
}

int main()
{
	int a = 4, b = 3;
	int v1, v2, v3, v4, sum;

	v1 = add(a, a + b);
	v2 = add(1, a + 2);
	v3 = add(1 + 2, a) - 3;
	sum = add(1, b) + add(a, 2);
	v4 = add(a, add(1, 2));

	printf("v1=%d , v2=%d, v3=%d, sum = %d,v4=%d", v1, v2, v3, sum, v4);

	return 0;
}
