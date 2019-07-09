//A:B 만일 조건이 참일경우 A를 반환 , 거짓일경우 B를 반환

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 5;
	int c;

	c = a < b ? a : b;
	printf("%d", c);
	return 0;
}

//실행결과:5
// a<b ? (c=a) : (c=b); 와 같이 표현가능 단! 이때 괄호를 생략하면 오류가 
