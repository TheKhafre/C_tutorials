#include <stdio.h>

/* This program will print hello world
* 5 times using the while loop.
* The code is simply an example to
* Show the working of a compile-time
* Variable declaration.
*/

int main(void)
{
	int i;

	printf("please enter a number:\t");
	scanf("%d", &i);

	if(i == 0)
	{
		printf("you have entered an invalid number\n");
	}

	while(i > 0)
	{
		printf("hello world!\n");
		i--;
	}
	printf("end of loop\n");
}
