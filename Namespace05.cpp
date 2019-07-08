#include <iostream>
using std::cin;                     //using을 전역변수처럼 취급,프로그럄 전체 영역에 효력발휘
using std::cout;                    //using을 전역변수처럼 취급,프로그럄 전체 영역에 효력발휘
using std::endl;                    //using을 전역변수처럼 취급,프로그럄 전체 영역에 효력발휘

int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}


//using을 main내에 쓰지 않고 밖에 쓴다면 즉, 함수 밖에 쓴다면 전역변수 처럼 프로그램 전체영역에 효력을 발휘 할 수 있다.
//만일 using main내에 쓴다면 지역변수처럼 함수 밖을 벗어나면 효력을 잃게 된다.

//실행화면
//Hello World!
//Hello World!
//20 A 3.14
