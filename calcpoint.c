#include <stdio.h>

/**
 * the program uses the function pointer
 * i.e. callback function to print a calculator
 * in place of a switch statement. the program
 * simply declares functions for the operator
 * and calls them one after other in another function
 * which is a function call another function.
 *
 * return: always 0 if success
 */

void add(int a, int b){printf("%d\n", a+b);}
void sub(int a, int b){printf("%d\n", a-b);}
void mul(int a, int b){printf("%d\n", a*b);}
void div(int a, int b){printf("%d\n", a/b);}

int main(void)
{
	int ch, a, b;
	void(*fptr[10])(int, int) = {add, sub, mul, div};
	printf("enter operator choice\n 0 for add \n 1 for sub \n 2 for mult \n 3 for div\n: \n");
	scanf("%d", &ch);
	printf("enter two nums to be operated: \n");
	scanf("%d %d", &a, &b);
	(*fptr[ch])(a, b);
}
