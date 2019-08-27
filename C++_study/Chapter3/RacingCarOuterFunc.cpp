#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN		= 20,
		MAX_SPD		=200,
		FUEL_STEP	=2,
		ACC_STEP	=10,
		BRK_STEP	=10
	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState();		//상태정보 출력,  22~24행:구조체안에 함수의 원형만 남으니, 함수의 종류가 한눈에 들어오고, 적절한 주석을 통해서 함수의 기능도 쉽게 판단이 된다.	
	void Accel();				//엑셀,속도증가.
	void Break();				//브레이크, 속도감소.
};

void Car::ShowCarState()		//27행:원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 밖으로 빠져나왔다.
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()			//34행:원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 밖으로 빠져나왔다.
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge == CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()		//50행:원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 밖으로 빠져나왔다.
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99",100,0 };
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}
