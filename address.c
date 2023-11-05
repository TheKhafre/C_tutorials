#include <stdio.h>

/*
 * this program is a test to check
 * how address of variables are
 * written in memory using hexadecimal
 * numbers. %x, %p, or %u
 */

int main(void)
{
	int b=10;
	printf("the address of b is %u\n", &b);
}
