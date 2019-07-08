#include <stdio.h>
#define SUB(X,Y)X-Y    //SUB(X,Y)와 PRT(X)라는 매크로 함수를 정의하고 사용하는 예제
#define PRT(X) printf("계산 결과는 %d입니다.\n",X)

int main(void)
{
	int result;
	int num_01 = 15, num_02 = 7;

	result = SUB(num_01, num_02);
	PRT(result);
	return 0;
} //"계산 결과는 8입니다." 출력됨
