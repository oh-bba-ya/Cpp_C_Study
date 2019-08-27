#include <iostream>
#include <string.h>
using namespace std;

char * MakeStrAdr(int len)
{
	// char * str= (char*)malloc(sizeof(char)*len);		//7,8행: 단순비교를 하더라도 new를 이용한 동적 할당이 훨씬 간결함을 알 수 있다.
	char * str = new char[len];
	return str;
}

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);
	delete[]str;			//18행:배열의 형태로 할당된 메모리 공간의 해제를 보이고 있다.
	return 0;
}

//MemMalFree에 오류 해결방법 .
