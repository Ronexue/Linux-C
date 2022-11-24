#include <stdio.h>

/* 
 * comment1
 * main: generate some simple output
 */

int main(void)
{
	printf(/* comment2 */"Hello,\b world.\n\f"); /* comment3 */
	printf("Goodbye, ");
	printf("cruel\tworld!\n");
	printf("\a");
	return 0;
}
