#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
	double dx = x2 - x1;
	double dy = y2 - y1;
printf("distance x and y are:%f,%f\n", dx, dy);
	double dsq = (dx*dx) + (dy*dy);
printf("dsq is:%f\n", dsq);
	double dist = sqrt(dsq);
	return dist;
}

double area(double rad)
{
	double result = 3.1415926 * rad * rad;
printf("area result is:%f\n", result);
	return result;
}
	
int main(void)
{
	double radius = distance(1.0, 2.0, 4.0, 6.0);
	printf("distance is:%f\n",radius);
	double are = area(radius);
	printf("the area is:%f\n",are);
	return 0;
}

