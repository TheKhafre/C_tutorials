#include <stdio.h>
#include <string.h>
/*
 * this program counts the number of 
 * characters in a string. we use 2 methods
 * first will be with a predefined function
 * "strlen(name)" the other will be our logic
 */

int main (void)
{
	int count=0, i=0, first=0;
	char name[30];
	printf("please enter your name:\t");
	gets(name);
	first=strlen(name);
	while(name[i] != '\0')
	{
		count++;
		i++;
	}
	printf("the result of strlen is = %d\n", first);
	printf("the result of our logic is = %d\n", count);
}
