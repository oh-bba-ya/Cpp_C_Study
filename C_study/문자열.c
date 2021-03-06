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


//%c 과 %s의 출력 차이
//%c으로 이용.
#include <stdio.h>

int main(void)
{
	char str[20] = "Hello World";
	int i;
	str[7] = '\0';
	for (i = 0; i < 20; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;			//출력결과 Hello W rld
}

//%s이용.
#include <stdio.h>

int main(void)
{
	char str[20] = "Hello World";

	str[7] = '\0';				//o = \0(널)으로 바꿨다.

	printf("%s\n", str);
	printf("%s\n", str + 5);

	return 0;			//출력결과 Hello W 
						//출력결과: W
}


//문자열 크기 구하기(직접).
#include <stdio.h>

int main(void)
{
	char str[20] = "Hello World";
	int i;

	for (i = 0; str[i] != '\0'; ++i);
	
	printf("length: %d\n", i);

	return 0;
}

//문자열 크기 구하기2(함수이용).
#include <stdio.h>
#include <string.h>			//헤더파일 추가.

int main(void)
{
	char str[20] = "Hello World";
	printf("length: %d\n", strlen(str));		//strlen()

	return 0;
}


//strcmp
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%d\n", strcmp("hi", "hello"));		//strcmp(char s1 , char s2) s1<s2의경우 음수출력.
							//s1==s2 일 경우: 0 , s1 >s2 의경우 : 양수출력.
	return 0;
}


//puts(str)
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10] = "Hi World";
	int ret = 1;

	ret = puts(str);				//puts(char s):s가 가리키는 문자열을 화면에 출력하고 마지막에 '\n'출력.
	printf("return: %d", ret);		//출력에 성공하면 음수가 아닌값을 반환 실패할경우 EOF(End Of File = -1)반환.

	return 0;
}


//
