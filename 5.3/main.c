#include <stdio.h>

int factorial(int n)
{
	if(n == 0)
		return 1;
	else{
		int a = n * factorial(n-1);
		return a;
	}
	return 0;
}
	
int main(void)
{
	int n = 0;
	printf("Please input a number\n");
	scanf("%d", &n);
	printf("The Factorial of n is:%d\n",factorial(n));
	return 0;
}

