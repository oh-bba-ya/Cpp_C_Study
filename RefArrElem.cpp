#include <iostream>
using namespace std;

int main(void)
{
	int arr[3] = { 1, 3, 5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
	return 0;
}

//실행화면
//1
//3
//5
//참조자는 무조건 선언과 동시에 변수를 참조하도록 해야한다. 이때 변수의 범위에는 배열 요소가 포함되어있다.
//즉,배열요소 arr[0]등과 같은 것도 참조자의 선언이 가능하다.
