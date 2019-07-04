#include <stdio.h>

int main()
{
	float student1 = 3.6;
	float student2 = 3.7;
	float student3 = 3.8;

	float total1 = student1 + student2 + student3;
	int total2 = student1 + student2 + student3;

	printf("total score(float):%f\n", total1);
	printf("total score(int):%d", total2);

	return 0;
}

#문제: 학생들의 학점을 Add하여 float,int로 
