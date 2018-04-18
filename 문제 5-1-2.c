#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1, num2;

	printf("두 실수를 입력하시오 : ");
	scanf("%lf %lf", &num1, &num2);

	printf("%f + %f = %f \n", num1, num2, num1+num2);
	printf("%f - %f = %f \n", num1, num2, num1-num2);
	printf("%f x %f = %f \n", num1, num2, num1*num2);
	printf("%f ÷ %f = %f \n", num1, num2, num1/num2);






	return 0;
}