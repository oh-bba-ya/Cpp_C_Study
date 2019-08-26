#include <iostream>
int Adder(int num1 = 1, int num2 = 2);   //함수의 선언 위치 여기에다가만 디폴트값을 설정해주어야한다.

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


//매개변수의 디폴트 값 지정은 함수의 선언부분에 위치한다.
//함수의 선언이 별도로 필요한 경우에는 매개변수의 디폴트 값은 함수의 선언부분에만 위치시켜야한다.
//만약 그렇지 않는다면 6행과 7행에서 컴파일 오류가 난다.
