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

int main(int argc, char* argv[])
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}
