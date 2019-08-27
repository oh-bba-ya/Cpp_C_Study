#include <iostream>
using namespace std;

#define ID_LEN		20                                      //4~8행:구조체 Car와 관련된 각종 정보를 상수화 하였다. 각각의 상수가 의미하는 바는 관련 함수를 통해서 이해할 수 있다.
#define MAX_SPD		200
#define FUEL_STEP		2
#define ACC_STEP		10
#define BRK_STEP		10

struct Car
{
	char gamerID[ID_LEN];		//소유자ID.
	int fuelGauge;				//연료량.
	int curSpeed;				//현재속도.
};

void ShowCarState(const Car &car)                       //17행:차의 정보를 출력하는 기능의 함수이다. 단순히 정보를 출력만 하기 떄문에 const 참조자를 매개변수로 선언하였다.
{
	cout << "소유자 ID: " << car.gamerID << endl;
	cout<<"연료량: "<<car.fuelGauge<<"%"<<endl;
	cout << "현재 속도: " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car& car)                        //24행:차의 가속을 위해서 엑셀을 밟은 상황을 표현해 놓은 함수 이다. 엑셀을 밟을 때마다 연료가 줄어들고 스피드가 올라가는 상황을 단순히 표현하였다.
{
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed += ACC_STEP;
}

void Break(Car& car)                        //40행:브레이크를 밟은 상황을 표현한 함수이다. 브레이크도 연료의 소모가 동반되지만, 단순히 속도가 감속하는 것으로 표현해놓았다.
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99", 100, 0 };            //53행:구조체 변수의 선언 및 초기화가 진행되었다.
	Accel(run99);                               //54~58행:엑셀과 브레이크를 밟은 상황을 연출하고 있다.
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);
	return 0;
}
