#include <stdio.h>

/* test for receiving referenced value in fuction */

void f(int *p, int m)
{
	m = m+5;
	*p = *p+m;
	return;
}

int main(void)
{
	/* code */
	int i=5, j=10;

	f(&i, j);
	printf("%d\n", i+j);
	return 0;
}