int형 사용

#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자 입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력: ";
	std::cin >> val2;
	
	int result = val1 + val2;
	std::cout << "덧셈 결과: " << result << std::endl;
	return 0;
}


double형 사용(소수점)

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
