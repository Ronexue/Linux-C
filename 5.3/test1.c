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
	if(y == 0)//最大公约数性质：gcd(a,0)=a
		return x;	
	else if(x%y == 0)
		return y;
	else
		return gcd(y, x%y);
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

