#include <iostream>
using namespace std;

namespace AAA				//이름공간의 중첩 사용
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}

//실행화면
//20
//30

//18,19행:별칭이 선언되기 이전의 변수 num1과 num2의 접근을 보이고 있다.
//21행:AAA::BBB::CCC에 ABC라는 별칭을 붙여준다.
//22,23행:별칭의 선언 이후의 접근을 보이고 있
