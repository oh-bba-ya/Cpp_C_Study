#include <iostream>

int main(void)
{
	char name[100];
	char lang[200];

	std::cout << "What's your name? ";
	std::cin >> name;

	std::cout << "What's your favorite language? ";
	std::cin >> lang;

	std::cout << "My name is " << name << "\n";
	std::cout << "My favorite langeage is " << lang << std::endl;

	return 0;
}

문자형도 int와 비슷하다 단 아직까지는 모르는것이 몇개 있지만 넘어가도록 하겠다.
if,for,char name[100]과 같은 것들은 따로 정리할것이다.
