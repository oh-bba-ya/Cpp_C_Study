//문제1
//예제 DegaultBalue3.cpp에 정의된 함수 BoxVolume를 '매개변수의 디폴트값 지정'형태가 아닌 '함수 오버로딩'의 형태로 재 구현해 보자. main함수는 변경하지 않아야 하며 실행결과도 동일해야한다.
#include <iostream>

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolume(int length, int width)
{
	return length * width;
}

int BoxVolume(int length)
{
	return length;
}

int main(void)
{
	std::cout << "[3,3,3]: " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D]: " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D]: " << BoxVolume(7) << std::endl;

	return 0;
}
