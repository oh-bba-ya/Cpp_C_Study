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
또한 디폴트값 설정은 오른쪽부터 채울 수 있다.
예를 들어 int Adder(int num1, int num2 = 7 ,int num3 = 10);
과 같은 경우는 유효하지만 int Adder(int num1 = 5, int num2 = 7 ,int num3);의 경우는 컴파일 오류가 난다.
그 이유는 함수에 전달되는 인자가 왼쪽에서부터 오른쪽으로 채워지기 때문이다.
그렇기 때문에 반드시 매개변수 디폴트값 설정은 오른쪽부터 채워야 한다.
