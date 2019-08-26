#include <iostream>
int BoxVolume(int length, int width = 1, int height = 1);		//2행:첫 번째 매개변수에는 디폴트 값이 지정되지 않았으므로, BoxVolume 함수를 호출할 때는 반드시 하나이상의 인자를 전달해줘야한다.

int main(void)
{
	std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;		//6,7,8행:모두 유효한 함수 호출문이다. 전달되는 인자는 왼쪽에서부터 채워지고 부족한 부분은 디폴트값이 대신 전달된다.
	std::cout << "[5,5,D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;		//인자는 왼쪽부터 전달되기에 length =7이란 뜻이다.
//	std::cout << "[D,D,D] : " << BoxVolume() << std::endl;		//9행:모든 매개변수에 디폴트 값이 지정된것이 아니기 때문에, 인자를 전달하지 않는 형태의 함수 호출은 컴파일 에러로 이어진다.
}

int BoxVolume(int length, int width, int height)
{
	return length * width* height;
}


DefaultValue2에서 설명한것과 같이 디폴트값은 오른쪽부터 채워야한다.
또한 디폴트값은 width,height만 설정되어 있으므로 함수 인자는 반드시 하나가 있어야 한다.
주석문에 있는 문장은 틀린것이다.
