#include <stdio.h>
#include <math.h>

int main(void)
{
	int hour = 11;
	int minute = 59;
	double c = ceil(minute / 60.0);
	double f = floor(minute / 60.0);
	printf("%d hours and %d percent of an hour\n", hour, minute * 100 / 60);
	printf("%d and %f hours\n", hour, minute / 60.0);
	printf("%f\n", c);
	printf("%f\n", f);
	return 0;
}

/*
int main(void)
{
	//char firstletter = 'a';
	int hour = 11, minute = 59;
	printf("%d hours and %d percent of an hour\n", hour, minute * 100 / 60);
	printf("%d and %f hours\n", hour, minute / 60.0);
	return 0;
}
*/
