//참조자(Reference)는 포인터를 몰라도 이해 할 수 있는 개념
//변수는 할당된 메모리 공간의 붙여진 이름
//이미 할당된 메모리 공간에 둘 이상의 이름을 부여할 수 있는걸 이번 기회에 알 수 있다.

int num1 = 2010; //메모리 공간에 변수 생성

int &num2 = num1; //num1이라는 이름이 붙어 있는 메모리 공간에는 num2라는 이름이 하나 더 붙게 된다. (참조자 선언)
int *ptr =&num1;        //변수 num1의 주소값을 반환해서 포인터 ptr에 저장해라!
int &num2 = num1;           //변수 num1에 대한 참조자 num2를 선언해라!

//따라서 num2는 num1의 '참조자'가 된다.

#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1;

	num2 = 3047;
	cout << "VAL: " << num1 << endl;			//VAR=변수
	cout << "REF: " << num2 << endl;			//REF=참조자

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;
	return 0;
}

//실행화면
//VAL: 3047
//REF: 3047
//VAL: 003BF918
//REF: 003BF918

//19행:num1에 대한 참조자 num2를 선언하였다. 따라서 이후로는 num1과 num2가 동일한 메모리 공간을 참조하게 된다.
//22,23행:동동일한 값이 출력되면 ,num1과 num2가 동일한 메모리 공간을 참조함을 증명하느 셈이다.
//25,26행:num1과 num2의 주소 값을 출력하게 하였다.
