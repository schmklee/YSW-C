#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue; // �� break(�ݺ��� ���������� ����)
		printf("%d ", num);

	}
	printf("end! \n");

	return 0;
}