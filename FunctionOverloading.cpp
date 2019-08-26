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
	MyFunc();			//20행:3행의 함수를 호출하는 문장이다.
	MyFunc('A');			//21행:8행의 함수를 호출하는 문장이다.
	MyFunc(12, 13);			//22행:13행의 함수를 호출하는 문장이다.
	return 0;
}

//함수 오버로딩:C++은 C와 달리 함수 호출시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분이 가능하기 때문에 이러한 형태의 함수정의를 가리킨다.
//즉,C++은 C와 달리 호출할 함수를 찾을때 두 가지 정보를 동시에 활용한다.(함수의이름, 매개변수의 선언)
//ex: int Myfunc(char c){...}  , int Myfunc(int n){...} 이 함수들의 경우 오버로딩이 가능하다. 매개변수의 자료형이 다르므로 전달인자의 자료형을 통해 구분이 가능하다.
//ex2: int Myfunc(int n){...}  , int Myfunc(int n1, int n2){...} 이 경우는 매개변수의 개수가 다르므로 함수오버로딩이 가능하다.
//즉, 매개변수의 자료형 또는 개수가 달라야 함수 오버로딩이 가능하다.

//잘못된 ex: void Myfunc(int n){...}  ,  int Myfunc(int n){...}  이 함수들은 반환형이 다르지만 함수호출시 호출되는 함수를 구분하는 기준이 될 수 없기에 컴파일 오류가 된다.
