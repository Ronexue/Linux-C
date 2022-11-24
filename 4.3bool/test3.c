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
	printf("Please input a number x:\n");
	scanf("%d", &x);
	printf("Please input a number y:\n");
	scanf("%d", &y);
	printf("x = %d , y = %d\n", x, y);
	if (x > 1 && y != 1)
		printf("1!\n");
	else if (x < 1 && y != 1)
		printf("2!\n");
	else
		printf("3!\n");
}

