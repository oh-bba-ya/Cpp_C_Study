#include <iostream>

int main(void)
{
	char name[100];
	char lang[200];

	std::cout << "What's your name? ";
	std::cin >> name;									//9,12행:배열에 문자열의 저장을 명령하고 있다.

	std::cout << "What's your favorite language? ";
	std::cin >> lang;

	std::cout << "My name is " << name << "\n";				//14행:'\n\과 같은 특수문자는 파이썬과 같은 의미를 지닌다. 다만 std::endl로 개행의 역할을 대신 할 뿐이다.
	std::cout << "My favorite langeage is " << lang << std::endl;

	return 0;
}

문자형도 int와 비슷하다 단 아직까지는 모르는것이 몇개 있지만 넘어가도록 하겠다.
if,for,char name[100]과 같은 것들은 따로 정리할것이다.
	
