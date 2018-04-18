#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	printf("%8s %14s %5s \n", "이 름", "전공학과", "학년");
	printf("%8s %14s %5s \n", "이 름", "전공학과", "학년");
	printf("%8s %14s %8s \n", "이 름", "전공학과", "학년");
	printf("%-1s %14s %-5s \n", "이 름", "전공학과", "학년");
	
	return 0;
}