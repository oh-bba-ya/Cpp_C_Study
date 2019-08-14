//문제1
//변수 x가 0이하이면 x의값1증가
#include <stdio.h>

int main(void)
{
	int x;

	printf("x의 값을 입력하시오: ");
	scanf_s("%d", &x);
	if (x <= 0)
	{
		++x;
	}
	printf("x의 값은:%d", x);
}

//문제2
//x의 값을 입력받아 2의 배수인지 3의배수인지 5의배수인지 알아내는 프로그램을 작성하시오.
#include <stdio.h>

int main(void)
{
	int x;

	printf("x의 값을 입력하시오: ");
	scanf_s("%d", &x);
	if (x % 2==0)
	{
		printf("2의배수입니다.\n");
	}
	
	if (x % 3 == 0)
	{
		printf("3의 배수입니다.\n");
	}

	if (x % 5 == 0)
	{
		printf("5의 배수입니다.\n");
	}
}


//문제3
//이번학기 점수를 입력받아 성적을 나타내시오.
//100~90:A, 89~80:B, 79~70:C, 69~60:D 59~0:F
//첫번째 코드의 경우 가독성이 떨어지기에 다른 코드를 작성해봤다.

#include <stdio.h>

int main(void)
{
	int score = 0;
	printf("점수를 입력하시오:");
	scanf_s("%d", &score);

	if (score >= 90)
	{
		printf("A\n");
	}
	else
	{
		if (score >= 80)
		{
			printf("B\n");
		}
		
		else
		{
			if (score >= 70)
			{
				printf("C\n");
			}

			else
			{
				if (score >= 60)
				{
					printf("D\n");
				}

				else
				{
					printf("F\n");
				}
			}
		}
	}

	return 0;
}

//2번째 이경우 출력하는건 한문장이므로 중괄호를 생략하고 들여쓰기를 사용하지 않아야 더 명확할거같아서 사용해봤다.
//단순히 들여쓰기만 하지 않았을뿐 else안에 들어가있는 if~else 들여쓰기 구조는 같다 좀 헷갈릴 수도 있지만 2째줄 if문 "/"을 사선으로 이으면 if~else가 이어져있다고 생각하면 편하다.
#include <stdio.h>

int main(void)
{
	int score = 0;
	printf("점수를 입력하시오: ");
	scanf_s("%d", & score);
	if (score >= 90) printf("A\n");
	else if (score >= 80) printf("B\n");
	else if (score >= 70) printf("C\n");
	else if (score >= 60) printf("D\n");
	else printf("F\n");
	return 0;
}
