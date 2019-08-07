#include <iostream>
using namespace std;

#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP		2
#define ACC_STEP		10
#define BRK_STEP		10

struct Car                                  //10행:함수를 멤버로 지니는 구조체의 정의를 보이고 있다.
{
	char gamerID[ID_LEN];		//소유자 ID.
	int fuelGauge;				//연료량.
	int curSpeed;				//현재속도.

	void ShowCarState()
	{
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
	}
	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;
	}
	void Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= BRK_STEP;
	}
};

int main(void)
{
	Car run99 = { "run99", 100, 0 };                        //51행:초기화의 대상은 함수가 아닌 변수이다 따라서 함수가 삽입 되었어도 초기화의 방법은 달라지지 않는다.
	run99.Accel();                                  //52행:구조체 run99에 존재하는,Accel 함수를 호출하고 있다. 구조체 내에 선언된 변수에 접근하는 방법과 동일한 방식으로 함수의 호출이 이뤄진다.
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };          //58,59행:또 다른 구조체 변수를 선언하였다. 그리고 이번에는 이 구조체를 대상으로 Accel 함수를 호출하고 있다. 이렇듯 구조체 내에 함수가 정의되었기 떄문에 구조체 변수를 대상으로 함수의 이 이루어져야 한다.
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}

//RacingCarFunc 와 다른점으로는 구조체내에 함수를 정의하고 호출함.
