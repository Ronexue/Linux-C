#include <stdio.h>
#include <math.h>

double myround(double x)
{
	int b = (int)(x*10)%10;
printf("b = %d\n", b);
	if (x >= 0){	
		if (b > 5)
			return 1;
		else 
			return 0;
	}
	else{
		if (b > -5)
			return 1;
		else
			return 0;
	}
	return 0;
}

int main(void)
{
	double x = 0.0;
	printf("Please input a float number:\n");
	scanf("%le", &x);
	printf("x = %f\n", x);
	int a = (int)x;
	printf("a = %d\n", a);	
	int c = 0;
	
	if (myround(x)) 
		c = ceil(x);
	else 
		c = floor(x);
	printf("the result is %d\n", c);
}

