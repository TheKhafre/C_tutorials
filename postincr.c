#include <stdio.h>

int main (void)
{
	int a = 5;
	int b, c;
	a++;
	
	b = a++;
	c = b;

	printf("\n\tthe value of b is %d\n\n", b);
	printf("\n\tthe value of c is %d\n\n", c);
	printf("\n\tthe value of a is %d\n\n", a);
}
