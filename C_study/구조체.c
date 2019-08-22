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


//구조체의 경우 몇bite를 차지할까.
//구조체의 경우 메모리의 효율성을 위해서 8의 배수로 할당하게 된다.
//단, 할당 크기의 경우 시스템마다 다르며 안쓰는 자투리 공간은 사용하지 않는다.

#include <stdio.h>

struct student			//구조체 student  정의는 함수 밖에서.
{
	int id;
	char name[8];
	double grade;
};

void main()
{
	printf("int: %d\n", sizeof(int));					//4바이트.
	printf("char: %d\n", sizeof(char[8]));					//8바이트.
	printf("doule: %d\n", sizeof(double));					//8바이트.
	printf("struct student: %d\n", sizeof(struct student));			//24바이트.
}


//구조체 배열.
#include <stdio.h>

struct complex			//구조체 자료형 선언.
{
	double real, imag;
};

void main()
{
	int i;
	struct complex x[3] = { {1.2 , 2.0}, {-2.2, -0.3} };

	x[2].real = x[0].real + x[1].real;
	x[2].imag = x[0].imag + x[1].imag;

	for (i = 0; i < 3; ++i)
	{
		printf("x[%d]: %.1f + %.1fi\n", i, x[i].real, x[i].imag);
	}
}
