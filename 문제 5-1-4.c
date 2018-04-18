#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	
	printf("숫자를 입력하시오 : ");
	scanf("%d", &num);
	
	printf("아스키문자 : %c", num);
	
	return 0;
}