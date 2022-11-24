#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
}

double area(double rad)
{
	return 3.1415926 * rad * rad;
}
	
int main(void)
{
	double radius = distance(1.0, 2.0, 4.0, 6.0);
	printf("the radius is:%f\n",radius);
	double are = area(radius);
	printf("the area is:%f\n",are);
	return 0;
}

