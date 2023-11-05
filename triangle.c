#include <stdio.h>

/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: Size of triangle
 */

int main(void)
{
	int c, i, j;
	int size;

	c = 0;
	i = size - 1;

	printf("enter size: ");
	scanf("%d", &size);
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;
		while (i > 0)
		{
			printf(" ");
			i--;
		}
		while (j > 0)
		{
			printf("#");
			j--;
		}
		printf("\n");
		c++;
	}

	if (size <= 0)
		printf("\n");
}
