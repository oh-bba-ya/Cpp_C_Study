#include <iostream>

void SimpleFunc(void)
{
	std::cout << "Define Function of BestCom" << std::endl;
}

void SimpleFunc(void)
{
	std::cout << "Define Function of ProgCom" << std::endl;
}

int main(void)
{
	SimpleFunc();
	return 0;
}

//위의 코드의 경우 별도의 설명이 없어도 이름과 매개변수 형이 동일하기 때문에 문제가 됨을 알 수 있다.
//그렇기에 namespace를 사용하여 이름공간을 만들어준다. 이럴경우 이름이 함수명이 겹쳐도 문제없이 실행이 될 수 가 있다.

#include <iostream>

namespace BestComImpl           //BestComImpl이라는 이름의 공간을 마련 이안에서 SimpleFunc를 정의하였다.
{
	void SimpleFunc(void)
	{
		std::cout << "Define Function of BestCom" << std::endl;
	}
}
namespace ProgComImpl           //ProgComImpl이라는 이름의 공간을 마련 이안에서 SimpleFunc를 정의하였다.
{
	void SimpleFunc(void)
	{
		std::cout << "Define Function of ProgCom" << std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();          //이름공간 BestComImpl내에 정의된 함수 SimpleFunc 호출문장이다.
	ProgComImpl::SimpleFunc();          //이름공간 ProgComImpl내에 정의된 함수 SimpleFunc 호출문장이다.
	return 0;
}

//실행결과:
//Define Function of BestCom
//Define Function of ProgCom
//
