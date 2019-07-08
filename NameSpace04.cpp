#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple Function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;                  //using사용
	HybFunc();
	return 0;
}


//using을 활용하여 범위지정없이 호출할 수 있다.

//실행화면
//So simple Function!
//In namespace Hybrid!

//14행:키워드 using을 이용해서 '이름공간 Hybrid에 정의된 HybFunc를 호출할 때에는, 이름 공간을 지정하지 않고 호출하겠다!'는 것을 명시(선언)하고있다.
//15행:14행의 using 선언을 통해서 이름공간의 지정 없이 HybFunc 함수를 호출하고 있다.
