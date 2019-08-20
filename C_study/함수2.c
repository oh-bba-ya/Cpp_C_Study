//함수 원형 선언.
//c프로그램에서는 함수 정의를 함수 호출위취보다 앞에 작성해야한다. 하지만 다수의 함수를 정의해야할때 불편하므로 해결방법이 있다.

#include <stdio.h>

int add(int x, int y);                  //함수 원형 선언.즉 함수의 형태를 표현하는 함수 원형을 코드 앞부분에 선언.
                                        //함수 형태를 지정해주는 것이므로 인자 선언에선 변수명은 무시된다.
                                        //int add(int x, int y) = int add(int a, int b) = int add(int , int) 이 3개의 선언은 모두 동일.
int main(void)
{
::
}

int add(int x, int y)
{
    //함수정의.
}

