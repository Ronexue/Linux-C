#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;
	printf("Please input a number x:\n");
	scanf("%d", &x);
	printf("Please input a number y:\n");
	scanf("%d", &y);
	printf("x = %d , y = %d\n", x, y);
	if (x <= 0 && y < 0)
		printf("Test failed!\n");
	else
		printf("Test OK!\n");
}

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
	if (x > 0)
		printf("Test OK!\n");
	else if (x <= 0 && y > 0)
		printf("Test OK!\n");
	else
		printf("Test failed!\n");
}
*/

