#include <stdio.h>

int fib(int n)
{		
	if(n == 0 || n == 1)
		return 1;	
	else
		return fib(n-1) + fib(n-2);
}
	
int main(void)
{
	int n = 0;
	printf("Please input a number:\n");
	scanf("%d", &n);
	printf("The Fibonacci is:%d\n",fib(n));
	return 0;
}
