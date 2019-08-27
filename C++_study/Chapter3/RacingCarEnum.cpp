#include <iostream>
using namespace std;

namespace CAR_CONST                     //4~14행:CAR_CONST 이름공간 안에 구조체 Car에서 사용하는 상수들을 모두 모아 놓았다.
{
	enum
	{
		ID_LEN			=20,
		MAX_SPD			=200,
		FUEL_STEP		=2,
		ACC_STEP		=10,
		BRK_STEP		=10
	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];            //18행:상수 ID_LEN의 접근을 위해서 이름 공간 CAR_CONST를 지정하고 있다. 이렇듯 이름공간을 지정해서 코드를 작성했기 떄문에 이문장만 봐도 이 상수가 어느 영역엣 선언되고 사용되는 상수인지 쉽게 알 수 있다.
	int fuelGauge;
	int curSpeed;

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
			fuelGauge -= CAR_CONST::FUEL_STEP;

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;
	}
	void Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}


//이름공간을 이용해서 상수가 사용되는 영역을 명시 하는것도 또 다른 방법이 될 수 있다. 그리고 이렇게 이름공간을 이용하면 몇몇 구조체들 사이에서만 사용하는 상수들을 선언할 때 도움이 된다.
