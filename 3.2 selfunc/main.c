#include <stdio.h>

void newline(void)
{
	printf("\n");
}

void threeline(void)
{
	newline();
	newline();
	newline();
}

int main(void)
{
	printf("First Line.\n");
	threeline();
	printf("Second Line.\n");
	return 0;
}

/*
int main(void)
{
	int hour = 11;
	int minute = 59;
	printf("%d and %d hours\n", hour, minute / 60);
	return 4;
}
*/
