 //함수에 배열 전체를 전달하는 경우 함수 실인자로써 배열이름만 쓴다.
 #include <stdio.h>

void print(int ar[3])                   //void print(int ar[]) 배열의 크기 생략해도 된다.
{
	int i;
	for (i = 0; i < 3; i++) printf("%d", ar[i]);
	printf("\n");
}

int main(void)
{
	int score[3] = { 70, 80, 90 };
	print(score);
	return 0;
}

//배열의 크기가 변경되는 경우에 대비 하기 위하여 배열의 크기를 인자로 넣을 수 있다.
#include <stdio.h>

void print(int ar[ ], int size)
{
	int i;
	for (i = 0; i < size ; i++) printf("%d", ar[i]);
	printf("\n");
}

int main(void)
{
	int score[3] = { 70, 80, 90 };
	print(score,3);
	return 0;
}
