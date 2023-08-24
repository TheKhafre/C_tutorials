#include <stdio.h>

/** main - tests the use of void pointer
* the void ponter will be used to print different
* datatypes in the same program
* return: 0
*/

int main(void)
{
	void *ptr = NULL;
	int i = 9;
	char j = 'a';
	float k = 1.299000;

	ptr = &i;
	printf("%d\n", *(int *)ptr);
&j;
	printf("%c\n", *(char *)ptr);

	ptr = &k;
	printf("||%15.2f||\n", *(float *)ptr);
}