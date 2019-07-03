#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called"<<std::endl;
}

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}


아직 c의 함수 선언문을 모르지만 오버로딩에 대해서 이해 할 수 있을거 같다.
C++은 C와 달리 함수호출시 전달되는 인자를 통해 함수의 구분이 가능하기에 위와 같은 함수명이 같아도 구분이 되어진다.
Python으로 예를 들면 파라미터의 입력갯수에 따라 구별되는듯하다.
