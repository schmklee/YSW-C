#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);
	
	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");

	if (num > 0)
		printf("�Է� ���� 0���� ũ��. \n");

	if (num == 0)
		printf("�Է� ���� 0�̴�. \n");

	return 0;
}