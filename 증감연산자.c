// ++x:x의값을 먼저 1을 증가시킨 후 다른 연산에 사용한다.
// x++:x의값을 먼저 사용한 후 1을 증가시킨다.
// --x:x의 값을 먼저 1을 감소시킨 후 다른 연산에 사용한다.
// x--:x의 값을 먼저 사용한 후 1을 감소시킨다.

// x++
#include <stdio.h>

int main()
{
	int x = 5;
	int y = x++;

	printf("%d\n", x);
	printf("%d", y);

	return 0;
}

//실행결과:6,5가 나오는데 왜 6,5지?

// ++x
#include <stdio.h>

int main()
{
	int x = 5;
	int y = ++x;

	printf("%d\n", x);
	printf("%d", y);

	return 0;
}

//실행결과:6,6이나오는데 내가 이해를 잘못한건지 모르겠다.
