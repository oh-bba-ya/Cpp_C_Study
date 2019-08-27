#include <iostream>
#include <string.h>					//2,3행:c++에서 c언어의 헤더파일을 추가하는것도 가능하다.
#include <stdlib.h>
using namespace std;

char * MakeStrAdr(int len)
{
	char * str = (char*)malloc(sizeof(char) * len);			//8행:문자열 저장을 위한 배열을 힙 영역에 할당하고 있다.
	return str;
}

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy_s(str, "I am so happy~");
	cout << str << endl;
	free(str);						//힙에 할당된 메모리 공간을 소멸하고 있다.
	return 0;
}


//strcpy가 strcpy_s로 대체되었다고 나오는데 자꾸 strcpy_s 함수는 2개의 매개 변수를 사용하지 않는다고 오류가 나온다.
//좀 더 공부해서 오류를 해결해봐야겠다.
//해결방법:비주얼 스튜디오 상단에 프로젝트  클릭 -> 속성 -> C/C++ 전처리기탭 -> 전처리기 정의에 ;_CRT_SECURE_NO_WARNINGS 추가하면 해결.
