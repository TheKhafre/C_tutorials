#include <stdio.h>

/* loop example to undesrstand
* the "for" loop
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			printf("%d\t", j);
		}
		printf("\n");
	}
}