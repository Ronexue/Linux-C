#include <stdio.h>

int factorial(int n)
{
	int result = 1;
	while (n > 0) {
		result = result * n;
		n = n - 1;
	}
	return result;
}
	
int main(void)
{
	int n = 0;
	printf("Please input a number\n");
	scanf("%d", &n);
	printf("The Factorial of n is:%d\n",factorial(n));
	return 0;
}

