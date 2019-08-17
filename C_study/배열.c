#include <stdio.h>

int main(void)
{
	int x[5], i;                        //x[5] = {0,1,2,3,4} 5개의 원소로 이루어진 크기가 5인 배열.
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &x[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", x[i]);
	}

	return 0;
}


//배열 초기화.
//배열을 선언할때 중괄호{}를 이용하여 배열초기화가 가능하다.
//크기가 5인 x의 배열에 요소를 3개만 넣는다면 나머지 뒤에는 '0'으로 표현된다.
#include <stdio.h>

int main(void)
{
	int i=0, x[5] = { 0,1,2};

	for (i = 0; i < 5; i++)
	{
		printf("%d", x[i]);
	}

	return 0;
}

//만일 모두 0으로 채우고 싶다면.
#include <stdio.h>

int main(void)
{
	int i=0, x[5] = { 0};

	for (i = 0; i < 5; i++)
	{
		printf("%d", x[i]);
	}

	return 0;
}


//배열의 크기.
#include <stdio.h>

int main(void)
{
	int i = 0, x[] = { 0,1,2,3,4 };
	
	for (i = 0; i < 5; i++)
	{
		printf("%d", x[i]);
	}

	printf("\n배열의 크기 = %d", sizeof(x));			//크기가 4바이트인 int형 원소 5개가 있으므로 출력결과:20.
	printf("\n배열의 크기 = %d", sizeof(x) / sizeof(int));	//x의 원소크기가 20바이트 이므로 int형 (4byte)로 나누게 되면 5.
}									//즉,전체 바이트를 int형 크기로 나누게 되면 x 배열의 크기를 알 수 있다.
