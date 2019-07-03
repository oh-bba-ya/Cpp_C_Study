#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

함수호출시 인자를 전달하지 않으면 num1=1 , num2=2가 전달이 된걸로 간주하겠다는것이다.
즉 python으로 치자면 파라미터에 입력하지않으면 디폴트값으로 설정된것이 나온다.
이때 Default란 기본적으로 
