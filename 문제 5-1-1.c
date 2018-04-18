#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;
	int xx = 0;
	int yy = 0;

	printf("좌상단의 x, y좌표: ");
	scanf("%d %d", &x, &y); // 좌상단의 점의 x,y좌표를 입력받음

	printf("우하단의 x, y좌표: ");
	scanf("%d %d", &xx, &yy); // 우하단의 점의 x,y좌표를 입력받음

	printf("두 점이 이루는 직사각형의 넓이는 %d입니다", (xx - x)*(yy - y)); // 입력받은 점의 좌표들을 이용하여 넓이계산

	return 0;
}