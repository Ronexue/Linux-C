#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("Please input a number:\n");
	scanf("%d", &x);
	printf("x = %d\n", x);
	int d = x / 10;
	int b = x % 10;
	printf("The shiwei is: %d , the gewei is: %d\n", d, b);
}

