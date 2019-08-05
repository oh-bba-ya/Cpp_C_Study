#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1;                            //두 참조자 ref1,ref2에 저장된 값의 교환과정이다. 이 교환의 과정은 main함수에 선언 된 변수 val1과 val2의 교화으로 이루어진다.
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2);                 //매개변수로 참조자가 선언되었으니, 참조의 대상이 될변수를 인자로 전달하면 된다.
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}
