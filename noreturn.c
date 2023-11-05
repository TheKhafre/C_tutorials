#include <stdio.h>

/**
 * main - calls the function noreturn
 * noreturn - this is a function that take neither
 * argument nor has a return value.
 * it simply prints hello world when called
 *
 */

void noreturn(void){
	printf("\n\thello world!\n\n");
}

int main(void)
{
	noreturn();
	return 0;
}
