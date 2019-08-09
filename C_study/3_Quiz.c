//문제
//학생3명의 학점을 실수형으로 입력받고 총 점수를 정수형과 실수형으로 출력내시오.
//학생1:3.6, 학생2: 3.7, 학생3: 3.8
//정수:11, 실수:11.1


#include <stdio.h>

int main()
{
	float std1 = 3.6;
	float std2 = 3.7;
	float std3 = 3.8;
	
	int total_int = std1 + std2 + std3;
	float total_float = std1 + std2 + std3;

	printf("학생들의 총 점수는: %f\n", total_float);
	printf("학생들의 총 점수는: %d\n", total_int);

	return 0;
}

//문제2
//각 학생의 점수를 실수형으로 입력받은 후 다시 정수형 변수에 저장하시오.
//학생의 총합을 정수형으로 출력하시오.


#include <stdio.h>

int main()
{
	float std1 = 3.6;
	float std2 = 3.7;
	float std3 = 3.8;
	
	int std1_int = std1;
	int std2_int = std2;
	int std3_int = std3;

	int total = std1_int + std2_int + std3_int;

	printf("학생들의 총 점수: %d\n", total);
	return 0;
}
