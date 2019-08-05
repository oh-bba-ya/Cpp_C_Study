#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char * MakeStrAdr(int len)
{
	char * str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy_s(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}


//strcpy가 strcpy_s로 대체되었다고 나오는데 자꾸 strcpy_s 함수는 2개의 매개 변수를 사용하지 않는다고 오류가 나온다.
//좀 더 공부해서 오류를 해결해봐야겠다.
