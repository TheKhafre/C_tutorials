#include <stdio.h>
#include <string.h>

/** main - the program concatenates 2 strings
* using a combination of strlen and
* user defined cocncatenation logic
*return: 0
*/

int main(void)
{
	char s1[30]="Olajide ";
	char s2[20]="Tobi";
	int len1, len2, i;

	len1=strlen(s1);
	printf("%d\n", len1);
	len2=strlen(s2);
	printf("%d\n", len2);


	for (i = 0; i <= len2; i++)
	{
		s1[len1 + i] = s2[i];
	}
	printf("%s\n", s1);
	return 0;
}