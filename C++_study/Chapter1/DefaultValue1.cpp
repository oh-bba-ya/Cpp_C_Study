#include <iostream>

int Adder(int num1 = 1, int num2 = 2)		//3행:Adder 함수의 디폴트 값으로 1과 2가 설정.
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;		//10행:Adder 함수를 호출하면서 인자를 전달하지 않았으니 1과 2가 전달된것으로 간주한다.
	std::cout << Adder(5) << std::endl;		//11행:Adder 함수를 호출하면서 인자를 하나만 전달하고 있다. 이러한 경우 인자는 첫 번째 매개변수로 전달된다. 따라서 두 번째 매개변수 num2에는 2가 전달된것으로 간주하겠다.
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

//함수호출시 인자를 전달하지 않으면 num1=1 , num2=2가 전달이 된걸로 간주하겠다는것이다. 
