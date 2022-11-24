#include <stdio.h>

void p(int x)
{
	int d = x / 10;
	int b = x % 10;
	printf("The shiwei is: %d , the gewei is: %d\n", d, b);
	//return 0;
}

int main(void)
{
	int x = 0;
	printf("Please input a number:\n");
	scanf("%d", &x);
	printf("x = %d\n", x);
	p(x);
}

