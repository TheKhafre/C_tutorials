#include <stdio.h>

/** test out recursion with a simple algorithm */

int sum(int x)
{
	int s = 0;
	if(x==1)
		return x;
	s = x + sum(x-1);
	return s;
}
int main(void)
{
	int a;
	a = sum(5);
	printf("%d\n", a);
}