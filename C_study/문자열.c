#include <stdio.h>

int main(void)
{
	char str[8] = { 'H','e','l','l','o' };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%c", str[i]);
	}

	return 0;
}

//위의 코드를 문자열로 바꾼다면 되게 간결해진다.
#include <stdio.h>

int main(void)
{
	char str[8] = "Hello";

	printf("%s", str);

	return 0;
}


//문자열 "A"와 문자배열'A'는 다르다.
//문자열은 \0을 마지막에 포함시키므로 크기가 다르기에 배열크기를 문자열로 할시엔 문자배열의 크기에 +1해줘야한다.
#include <stdio.h>

int main(void)
{
	char str1[] = { 'H','e','l','l','o' };		//문자 배열.
	char str2[] = "Hello";						//문자열.

	printf("%d %d", sizeof(str1), sizeof(str2));		//결과 출력:5 6.

	return 0;
}


//인자로 전달된 주소의 문자부터 널문자 전까지 출력.
#include <stdio.h>

int main(void)
{
	char str[20] = "Hello World";

	printf("%s\n", str);			//주소의 문자부터 널문자 전까지 출력.
	printf("%s\n", str + 5);		//주소의 시작이 5부터이므로 공백부터 출력하게된다.

	return 0;				//printf는 문자열의 크기를 모른다. 그렇기에 이런경우가 발생.
}
