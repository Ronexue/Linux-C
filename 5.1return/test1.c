#include <stdio.h>

int is_leap_year(int year)
{
	if ( year % 4 == 0){
		if( year % 100 != 0){
			return 1;
		}
		else if( year % 400 == 0){
			return 1;
		}
		else
			return 0;
	}
	else return 0;
}

int main(void)
{
	int year = 0;
	printf("Please input a year:\n");
	scanf("%d", &year);
	printf("year = %d\n", year);
	if (is_leap_year(year)) 
		printf("This year is leap_year\n");
	else 
		printf("This year is not leap_year\n");
}

