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


#include <iostream>
using namespace std;			//'이름공간 std에 선언된 모든것에 대해 이름공간 지정의 생략' 명령

int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}

//만일 using을 일일히 std에 선언된 모든것에 대해 이름공간 지정의 생략을 원한다면 즉,std 이름공간안에 있는 선언된 것들을 일일히 타이핑하기 귀찮을때
//27행 :'이름공간 std에 선언된 모든것에 대해 이름공간 지정의 생략' 위의 첫번째 예제처럼 일일이 타이핑하기 귀찮을
