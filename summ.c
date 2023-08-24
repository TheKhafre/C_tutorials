#include <stdio.h>

/**
* main - This program sums two numbers
* by call the sum functions
* Return: 0 on success
*/

void sum(void)
{
    int a, b;
	int sum = 0;

	printf("please enter two numbers: \n");
	scanf("%d %d", &a, &b);
	sum = a+b;

	printf("sum = %d", sum);
}

int main(void)
{
	sum();
	return 0;
}
