#include <stdio.h>
/*
int main(void)
{
	int x = 0;
	int y = 0;
	printf("Please input a number x:\n");
	scanf("%d", &x);
	printf("Please input a number y:\n");
	scanf("%d", &y);
	printf("x = %d , y = %d\n", x, y);
	if (x = 1 || y = 1)
		printf("3!\n");
	else
		printf("9!\n");
}
*/

int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("Please input a number x:\n");
	scanf("%d", &x);
	printf("Please input a number y:\n");
	scanf("%d", &y);
	printf("Please input a number z:\n");
	scanf("%d", &z);
	printf("x = %d , y = %d , z = %d\n", x, y, z);
	if (x<3 && y>3)
		printf("Test OK1!\n");
//	else if (x>=3 && y>=3)
//		printf("Test OK2!\n");
	else if (z>3 && x>=3)
		printf("Test OK3!\n");
	else if (z<=3 && y>=3)
		printf("Test OK4!\n");
	else
		printf("Test failed!\n");
}

