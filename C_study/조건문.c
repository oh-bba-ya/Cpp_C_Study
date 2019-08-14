#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);
	if (x > 0)
		printf("양수입니다.\n");			//if문의 조건식이 만일 참일경우 실행할 내용이 하나의 문장이라면 중괄호는 생략가능하다.
	return 0;
}
