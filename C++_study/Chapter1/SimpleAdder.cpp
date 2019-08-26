#include <iostream>

int main(void)
{
	int val1;                                       //입력받을 변수.
	std::cout << "Your first number enter: ";       //여기선 개행문자를 따로 안쓰는거같다. 이유는...잘모르겠다 일단 3번째 복습때 더욱 깊이 들어가야겠다.
	std::cin >> val1;

	int val2;                                       //입력받을 변수2.
	std::cout << "Your second number enter: ";
	std::cin >> val2;

	int result = val1 + val2;                       //덧셈 결과 변수.
	std::cout << "add result: " << result << std::endl;
	return 0;
}

//만일 실수형을 입력받고 싶다면 5행,9행,13행의 자료형을 double로 바꾸면된다.
