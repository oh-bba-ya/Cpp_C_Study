#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace BestComImpl
{
	void PrettyFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "Define Function of BestCom" << std::endl;
	PrettyFunc();					//동일 이름 공간
	ProgComImpl::SimpleFunc();		//다른 이름 공간
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "Define Function of ProgCom" << std::endl;
}


//동일한 이름공간에 정의된 함수를 호출할 때 에는 이름공간을 명시할 필요가 없다.
//실행화면
//Define Function of BestCom
//So Pretty!!
//Define Function of ProgCom

//3,8행:이름공간은 둘 이상의 영역으로 나뉘어서 선언할 수 있다. 물론 이 둘은 동일공간으로 간주된다.
//27행:24행에 정의된 함수와 동일한 이름공간에 정의된 함수이다. 따라서 이렇게 직접 호출이 가능하다.
//28행:함수의 호출위치가 어떻게 되건, 이름공간 ProgComImpl에 정의된 함수 SimpleFunc를 호출하는 방법에는 차이가 
