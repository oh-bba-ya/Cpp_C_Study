#include <iostream>
using namespace std;

int main(void)
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;		//이중 포인터에 &ptr(포인터)의 주소 저장, 포인터도 실제로는 변수라 메모리 주소를 구할 수 있다.
                            //하지만 포인터의 메모리 주소는 일반 포인터에 저장 할 수 없고, int **dptr처럼 이중 포인터에 저장해야한다.
	int& ref = num;
	int* (&pref) = ptr;         //11,12행:포인터 변수의 참조자 선언도 & 연산자를 하나 더 추가하는 형대로 진행이 된다.
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;      //15행:pref는 포인터 변수 ptr의 참조자이므로, 변수 num에 저장된 값이 출력된다.
	cout << **dpref << endl;    //16행:dpref는 포인터 변수 dptr의 참조자이므로 변수 num에 저장된 값이 출력된다.
	return 0;
}
