#include <stdio.h>

/** main - checks the unary operators
* in the program
*/

int main(void)
{
	int i = 0;

	printf("%d\n", i++);
	printf("%d\n", i);
	printf("%d\n", ++i);
	//printf("%d\n", --i);
	printf("%d\n", i--);
	printf("%d\n", i);

	return 0;
}