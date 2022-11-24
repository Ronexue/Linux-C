#include <stdio.h>
int abs(int m)
{
	if(m < 0) return -m;
	else return m;
}

int gcd(int a, int b)
{
	int x = abs(a);
	int y = abs(b);
	int var = y;
	while(x%y != 0){
		int remainder = x%y;
		x = var;
		y = remainder;
	}
	return y;
}
	
int main(void)
{
	int a = 0;
	int b = 0;
	printf("Please input two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("The Greatest Common Divisor is:%d\n",gcd(a,b));
	return 0;
}

