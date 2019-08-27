#include <iostream>
using namespace std;

bool IsPositive(int num)
{
	if (num <= 0)
		return false;
	else
		return true;
}

int main(void)
{
	bool isPos;
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;

	return 0;
}

//4행:bool도 기본자료형이기 때문에 함수의 반환형으로도 선언이 가능하다.
//14,19행:bool형 변수를 선언해서 함수 IsPositive가 반환하느 bool형 데이터를 저장하고있다.

//input값을 0이하로 입력한다면 Negative number이 출력되며, 0초과일시 Positive number이 출력된다.
