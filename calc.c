#include <stdio.h>

/** main - a calculator with switch statement
* the program uses the switch-case statement
* to design a calculator that takes
* input from the user.
* return: 0.
*/

int main(void)
{
	int a, b, add, sub, mul;
	char operator;
	float div = 0;

	printf("enter operator (+ - / *): \n");
	scanf("%c", &operator);

	printf("enter values to operate: \n");
	scanf("%d %d", &a, &b);

	switch(operator){
	case '+':
		add = a + b;
		printf("sum is %d\n", add);
		break;
	case '-':
		sub = a - b;
		printf("sum is %d\n", sub);
		break;
	case '*':
		mul = a * b;
		printf("sum is %d\n", mul);
		break;
	case '/':
		div = a / b;
		printf("sum is %f\n", div);
		break;
	default:
		printf("enter correct values\n");
	}
}
