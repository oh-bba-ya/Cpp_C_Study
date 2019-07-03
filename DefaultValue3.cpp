#include <iostream>
int BoxVolume(int length, int width = 1, int height = 1);

int main(void)
{
	std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;
//	std::cout << "[D,D,D] : " << BoxVolume() << std::endl;
}

int BoxVolume(int length, int width, int height)
{
	return length * width* height;
}


DefaultValue2에서 설명한것과 같이 디폴트값은 오른쪽부터 채워야한다.
또한 디폴트값은 width,height만 설정되어 있으므로 함수 인자는 반드시 하나가 있어야 한다.
주석문에 있는 문장은 틀린것이다.
