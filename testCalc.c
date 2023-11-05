#include <stdio.h>

/**
 * main - the program acts as a
 * calculator using the switch statement
 * Return: 0 if success
 */

int main(void)
{
	int a, b;
	int sum, sub, mul;
	char result;
	float div;;

	printf("enter operator: \n");
	scanf("%c", &result);

	printf("enter two numbers: \n");
	scanf("%d %d", &a, &b);

	switch (result) {
		case '+':
			sum = a + b;
			printf("result is %d\n", sum);
			break;
		case '-':
			sub = a - b;
			printf("result is %d\n", sub);
			break;
		case '*':
			mul = a * b;
			printf("result is %d\n", mul);
			break;
		case '/':
			div = a / b;
			printf("result is %f\n", div);
			break;
	}
}
