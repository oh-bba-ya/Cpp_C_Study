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



std::cin>>'변수1'>>'변수2';
순서대로 입력되는것이 변수 1,2에 나뉘어서 저장되며 첫번째 정수와 두번째 정수를 나누는것의 기준(경계)는 탭,스페이스 바,Enter과 
같은 공백에 의해 나뉘어진다.
