#include <iostream>
using namespace std;

int RefRetFuncTwo(int& ref)
{
	ref++;
	return ref;   //참조자를 다시 반환하지만, 반환형이 기본자료형 int이기 때문에 참조자가 참조하는 변수의 값이 반환된다. 즉,변수에 저장되는 값이 반환된다.
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncTwo(num1);

	num1 += 1;    //num1과 num2가 다른 변수임을 확인하기 위해서 서로 다른 연산을 진행 하였다.
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}
