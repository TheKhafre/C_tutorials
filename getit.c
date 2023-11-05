#include <stdio.h>

int main()
{
	char ch[10];
	printf("what is your name?\t");
	gets(ch);

	printf("my name is: %s\n", ch);
}
