#include <stdio.h>

/**
 * main - calls a function for add 2 int
 * argsum - this function takes 2 argument
 * and prints the sum
 *
 * return: value of the sum argument
 */

void argsum(int a, int b){
	printf("\n\tthe sum is %d\n\n", a+b);
}
int main(void)
{
	argsum(5, 6);
	return 0;
}
