#include <cmath>                        //1행:C 표준헤더 math.h에 대응한다.
#include <cstdio>                       //2행:C 표준헤더 stdio.h에 대응한다.
#include <cstring>                      //3행:C 표준헤더 string.h에 대응한다.
using namespace std;                    //4행:C의 표준에 정의된 함수들 조차 이름공간 std 안에 선언이 되어 있어서 이 문장이 삽입되어야 한다.

int main(void)
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);                                         //11행~13행:C언어의 표준함수를 호출 하고 있다.
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.25));
	return 0;
}

//c++에서 c 함수를 사용하고 싶다면 'c'를 더하고 '.h' 를 빼라.
