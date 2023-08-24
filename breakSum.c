#include <stdio.h>

/* test for break and
* continue statement in C.
* Desc: if we enter a negative number,
* the program will stop in "break"
* whereas, it will only ignore the negative integer
* in a continue statement.
*/

int main(void)
{
	int a, i, sum = 0;

	for (int i = 0; i <=5 ; i++)
	{
		printf("enter a number\n");
		scanf("%d", &a);

		if (a<0)
		{
			//break;
			continue;
		}
		sum = sum + a;
	}
	printf("%d", sum);
}
