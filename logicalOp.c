#include <stdio.h>

/**
 * this program contains simple codes
 * that establishes the underatanding of
 * the use of the logical operator in C programming.
 */

int main(void)
{
	int i = 3, j = 17, k = 0;
	int result, takes;
	int a = 0;

	result = i && j;

	//printf("\n\tthe value of a is %d\n\n", a);

	// checking for the or condition
	//printf("\n\tthe returned value is %d\n", a || k);
	
	//checking for the not condition
	printf("\tthe value of the not condition is %d\n",j && !k);

	/*printf("\n\tthe value is %d\n", result); //1
	printf("\tthe value is %d\n", i && k); //0
	printf("\tthe value is %d\n", i && j && k); //0
	printf("\tthw value is %d\n", j && k); //0

	//including strings in a logical check
	takes = 0 && printf("\ttayo\n");
	printf("\tthe string returns %d\n", takes);*/ //1
	return (0);
}
