#include <iostream>

int main(void)
{
	int num = 20;
	std::cout<<"Hello world!" << std::endl;
	std::cout << "Hello " << "world!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}


처음 배운 파이썬 언어와 다르게 C++은 입출력이 다르다.
헤더 파일로 처음 코드를 시작하고 중괄호안에 코드를 입력함으로써 입출력이 완성되는거 같다.
각 줄의 끝에는 ;이 있어야한다.
std::cout<<'출력 대상'; 형태로 입력한다. 또는 std::cout<<'출력 대상1'<<'출력 대상2'<<'출력 대상3' 으로도 
또한 endl; 할때 l은 영어 엘이다. 이것은 개행의역할 즉 문장을 마치고 다음 줄로 이동하는 역할 파이썬에서의 /n과 같은 역할 같다.
cout는 console out이다.
