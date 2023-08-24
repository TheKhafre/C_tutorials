#include <stdio.h>

/**
* main - the program calls a function
* which is passed into the for loop
* for running the program.
*
* static is used as a keyword to indicate
* that the scope of the variable will be global
* i.e until the end of the program, the data will be valid
* 
* return: 0 on success
*/

int r()
{
	static int num = 7;
	return num--;
}

int main(void)
{
	for (r(); r(); r())
	{
		printf("%d\n", r());
		/* code */
	}
	return 0;
}