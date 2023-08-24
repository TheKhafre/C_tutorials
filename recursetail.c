#include <stdio.h>

/** 
 * main - the program tests out recursion
 * it couts forward and backward using a static variable d
 * and another int n
 */

void count(int n)
{
	static int d = 1;
	printf("%d\n", n);
	printf("%d\n", d);
	d++;

	if (n>1)
	{
		/* code */
		count(n-1);
	}
	printf("%d\n", d);
}

int main(void)
{
	count(3);
}