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
