#include <stdio.h>
#define SQR(X) X*X
#define PRT(X) printf("계산 결과는 %d입니다.\n",X)

int main(void)
{
	int result;
	int x = 5;

	result = SQR(10);
	PRT(result);
	result = SQR(x);
	PRT(result);
	result = SQR(x + 3);
	PRT(result);
	return 0;
}

//계산 결과는 100입니다.
//계산 결과는 25입니다.
//계산 결과는 23입니다.

//3번째 계산 결과는 예상대로라면 64가 나와야 겠지만 23이 나왔다. 그 이유는 매크로 함수는 인수를 컴파일 이전에 치환하기 때문이라고 한다.
// x+3*x+3=23, 이런식으로 계산된다.
//3번째 결과를 정확히 반환하고 싶다면 가로를 해줘야한다. SQR(X) ((X)*(X)) 모든 인수를 괄호를 해줘야한다.
