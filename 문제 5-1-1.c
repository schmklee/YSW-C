#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;
	int xx = 0;
	int yy = 0;

	printf("�»���� x, y��ǥ: ");
	scanf("%d %d", &x, &y); // �»���� ���� x,y��ǥ�� �Է¹���

	printf("���ϴ��� x, y��ǥ: ");
	scanf("%d %d", &xx, &yy); // ���ϴ��� ���� x,y��ǥ�� �Է¹���

	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�", (xx - x)*(yy - y)); // �Է¹��� ���� ��ǥ���� �̿��Ͽ� ���̰��

	return 0;
}