#include <stdio.h>
#include <math.h>

void print_logarithm(double x)
{
	if (x <= 0.0) {
		printf("Positive numbers only, please.\n");
		return;
	}
	printf("The log of x is %f\n", log(x));      //ln
}

int main(void)
{
	double x = 0.0;
	printf("Please input a number:\n");
	scanf("%lf", &x);
	printf("x = %f\n", x);
	print_logarithm(x);
}

