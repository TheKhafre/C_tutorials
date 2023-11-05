#include <stdio.h>

/*
 * Date: 28:06:23
 * what it does: this program is used to check for
 * error with pointer program.
 * specifically difference between 
 * *a+1 and *(a+1)
 */

int main(void)
{
	int a[] = {6,2,1,5,3};
	printf("the value of *a+1 is %d\n", *a+1);
	printf("the value of *(a+2) is %d\n", *(a+2));
}
