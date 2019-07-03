#include <iostream>
int Adder(int num1 = 1, int num2 = 2);   #함수의 선언 위치 여기에다가만 디폴트값을 설정해주어야한다.

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}


함수의 선언이 필요한 경우 매개변수의 디폴트값은 함수의 선언부분에만 위치시켜야한다.
