#include <iostream>
#define SQUARE(x) ((x)*(x))

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}

//C++에서는 함수의 몸체부분이 함수호출 문장을 완전히 대체했을 때 '함수가 인라인화 되었다.'라고 표현한다.
//"매크로 함수는 정의하기가 복잡하니,일반 함수처럼 정의가 가능하면 좋겠다"라는 정의라고 생각하면 쉬울거같다.
//즉,매크로 함수의 장점은 유지하되 단점은 제거한다는것이다.


#include <iostream>

inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}

//단 위의 경우 문제점이 있다.
//문제점은 만약 x=3.15 와같은 실수일때 데이터 손실이 발생하여 결과값은 9가 나온다.
//그렇기에 첫번째 예제처럼 #define 해준다면 자료형에 의존적이지 않은 함수가 된다. 그렇기에 데이터 손실이 발생되지 않을 수 있다.
