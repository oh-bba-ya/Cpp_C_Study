#include <iostream>
using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl;                       //9,10행:키워드 true,false를 콘솔에 출력했을 때의 출력내용을 확인하기 위한 문장이다.
	cout << "flase: " << false << endl;

	while (true)                                 //12행:C언어에서는 무한루프를 형성하기 위해서 일반적으로 숫자 1을 사용한다.C++에서도 물론 숫자1
	{                                            //사용할 수 도 있지만,이렇게 true를 대신 사용할 수도 있다.
		cout << i++ << ' ';
		if (i > num)
			break;
	}
	cout << endl;

	cout << "sizeof 1: " << sizeof(1) << endl;
	cout << "sizeof 0: " << sizeof(0) << endl;
	cout << "sizeof true: " << sizeof(true) << endl;
	cout << "sizeof flase: " << sizeof(false) << endl;
	return 0;
}

//20,21행:상수 1과 상수 0의 크기를 확이인하기 위한 문장이다.
//22,23행:참과 거짓으 의미하느 데이터 true와 false의 크기를 확인하기 위한 문자이다.
//여기서 조심해야할거은 22,23행은 단순히 true = 1 , false = 0 인것은 아니다 단순히 출력을 0과 1로 할 뿐이지 true,false의 크기는 1이다
//숫자 1,0의 크기는 4이므로 1,0은 무조건 true,false라고 오해하지말자.
