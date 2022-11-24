#include <stdio.h>

int fib(int n)
{
	int fib[n];
	fib[0] = 1;
	fib[1] = 1;
	int result = 1;
	int i = 2;
	if(n == 0 || n == 1)
		return result;
	else{
printf("now in biger than 2\n");
		while(i <= n){
			fib[i] = fib[i-1] + fib[i-2];
printf("fib[i-1] and fib[i-2] is:%d, %d\n",fib[i-1], fib[i-2]);
			result = fib[i];
			i++;
		}
	}
	return result;
}
	
int main(void)
{
	int n = 0;
	printf("Please input a number:\n");
	scanf("%d", &n);
	printf("The Fibonacci is:%d\n",fib(n));
	return 0;
}

