#include <stdio.h>

int main(void)
{
	int a = 6;
	int b = 7;
	int c = 8;
	int d;
	int f = b;

	if (a == b)
	{
		printf("hello world!\n");
	}

	a = b = c = d = f = 23;
	printf("%d\n", a);
}