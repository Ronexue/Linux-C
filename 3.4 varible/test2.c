
#include <stdio.h>

int hour = 23, minute = 59;

void print_time(int hour, int minute)
{
	printf("%d:%d\n", hour, minute);
}

void muhu()
{
	print_time(11,12);
}

int main(void)
{
	void print_time(int, int);
	print_time(23, 59);
	return 0;
}



/*
#include <stdio.h>

int hour = 23, minute = 59;

void print_time(void)
{
	printf("%d:%d in print_time\n", hour, minute);
}

int main(void)
{
	print_time();
	printf("%d:%d in main\n", hour, minute);
	return 0;
}*/
