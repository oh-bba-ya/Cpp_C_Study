//구조체 정의만 하게되면은 메모리에 할당되지 않음.
//변수선언을 하게 된 경우에만 메모리 할당.

#include <stdio.h>

struct student			//구조체 student  정의는 함수 밖에서.
{
	int id;
	char name[8];
	double grade;
};

void main()
{
	struct student st1 = { 10,"Tom",3.2 };			//변수 선언 및 초기화.

	st1.id += 20;						//구조체 멤버에 값 대입.
	strcpy(st1.name, "alice");			//주의: st1.name = "alice" (x).
	st1.name[0] = 'A';

	printf("id: %d\n", st1.id);				//구조체 멤버의 값 참조.
	printf("name:%s\n", st1.name);
	printf("grade:%.2f\n", st1.grade);

}
