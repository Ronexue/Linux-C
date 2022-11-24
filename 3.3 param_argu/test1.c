#include <stdio.h>

void increment(int x)
{
	x = x + 1;
	printf("x=%d\n",x);
}

int main(void)
{
	int i = 1, j = 2;
	increment(i); /* i now becomes 2 */
	increment(j); /* j now becomes 3 */
	printf("i=%d,j=%d\n",i,j);
	return 0;
}
