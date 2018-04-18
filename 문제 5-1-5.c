#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char num;
	
	printf("아스키문자를 입력하시오 : ");
	scanf("%c", &num);

	printf("아스키코드 : %d \n", num);

	return 0;
}