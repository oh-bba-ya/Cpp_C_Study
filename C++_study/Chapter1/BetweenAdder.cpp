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
//이 코드를 실행시킨다면 첫번째 입력되는 정수는 변수1에 저장되고 두번째 입력되는 정수가 변수2에 저장된다.
//첫번째 정수와 두번째 정수의 경계는(데이터간의 경계) 탭, 스페이스 바, Enter 키의 입력과 같은 공백에 의해 나뉘어진다.
