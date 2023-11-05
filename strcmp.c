#include <stdio.h>
#include <string.h>

/** main - the program compares two strings
 * and return a zero value for same
 * or non-zero if different.
 * Return: 0 on success.
 *
 */

int main(void)
{
	int value = 0;
	char s1[] = "Hello";
	char s2[] = "Hi";

	value = strcmp(s1,s2);
	if(value == 0)
		printf("same\n");
	else
		printf("not same\n");
	printf("%d\n", value);
}
