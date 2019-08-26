#include <iostream>

int main(void)
{
	double val1;
	std::cout << "첫 번째 숫자 입력: ";
	std::cin >> val1;

	double val2;
	std::cout << "두 번째 숫자 입력: ";
	std::cin >> val2;
	
	double result = val1 + val2;
	std::cout << "덧셈 결과: " << result << std::endl;
	return 0;
}

//C++은  선언의 위치가 자유롭다. 그렇기에 지역변수 선언은 함수 내 어디든 삽입이 가능하다.

