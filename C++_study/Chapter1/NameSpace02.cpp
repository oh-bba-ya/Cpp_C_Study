#include <iostream>

namespace BestComImpl           //이름공간안에 함수의 선언만 삽입되었다.
{
	void SimpleFunc(void);
}

namespace ProgComImpl           //이름공간안에 함수의 선언만 삽입되었다.
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)              //BestComImpl에 선언된 함수 SimpleFunc의 정의부분이다. ::연산자는 함수의 호출이외에도 다양하게 사용된다.        
{
	std::cout << "Define Function of BestCom" << std::endl;
}

void ProgComImpl::SimpleFunc(void)              //ProgComImpl에 선언된 함수 SimpleFunc의 정의부분이다
{
	std::cout << "Define Function of ProgCom" << std::endl;
}

//실행화면
//Define Function of BestCom
//Define Function of ProgCom
//1번째 예제와달리 함수의 선언과 정의를 따로 구분하였다.
