#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple                        //5~12행:프로그래머가 직접 정의한 자료형(아직 모르는 부분,공부 필요)
{
public:
	Simple()
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;                   //17행:5행에 정의되어 있는 자료형을 근거로,new 연산자를 이용해서 힙 영역에 변수를 할당하고 있다.

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);          //20행:5행에 정의되어 있는 자료형을 근거로, malloc 함수호출을 통해서 힙 영역에 변수를 할당하고 있다.

	cout << endl << "end of main" << endl;
	delete sp1;                                         //23,24행:할당방법에 따른른 소멸을 진행하고있다.
	free(sp2);
	return 0;
}
