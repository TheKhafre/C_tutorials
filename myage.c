#include <stdio.h>

/** main - this programm simply take
* input from user to tell back the age
* as received.
* Return: 0.
*/

int main(void)
{
	int age;

	printf("Please enter your name:\t");
	scanf("%d", &age);

	printf("you have entered %d years\n", age);
	getchar();
}