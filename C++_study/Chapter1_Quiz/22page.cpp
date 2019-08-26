//문제1
//사용자로부터 총 5개의 정수를 입력받아서 그 합을 출력하는 프로그램 작성.
#include <iostream>

int main(void)
{
	int val1;
	std::cout << "first numer input: ";
	std::cin >> val1;

	int val2;
	std::cout << "Second number input: ";
	std::cin >> val2;

	int val3;
	std::cout << "Third number input: ";
	std::cin >> val3;

	int val4;
	std::cout << "Fourth number input: ";
	std::cin >> val4;

	int val5;
	std::cout << "Fifth number input: ";
	std::cin >> val5;

	int result = val1 + val2 + val3 + val4 + val5;
	std::cout << "Add result: " << result << std::endl;

	return 0;
}

//문제2
//프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서 입력받은 데이터를 그래도 출력하는 프로그램을 작성해보자.

#include <iostream>

int main(void)
{
	char name[100];
	std::cout << "What's your name: ";
	std::cin >> name;

	char number[100];
	std::cout << "What's your phone number: ";
	std::cin >> number;

	std::cout << "My name is " << name << std::endl;
	std::cout << "My phone number " << number << std::endl;

	return 0;
}
