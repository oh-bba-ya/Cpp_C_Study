//문제
//const int num =12; 상수선언
/*포인터 변수를 선언해서 위변수를 가리키게 해보자 그리고 이 포인터 변수를 참조하는 참조자를 하나 선언하자. 
마지막으로 이렇게 선언된 포인터 변수와 참조자를 이용해서 num에 저장된 값을 출력하는 예제를 완성해보자.*/

#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;
	const int * ptr = &num;
	const int* (&ref) = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;
	return 0;
}
