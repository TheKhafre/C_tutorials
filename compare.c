#include <stdio.h>

/** main - checks two stings for similar character
* if same, flag is 0, else flag is 1
* return: 0
*/

int main(void)
{
	int flag, i;
	char name1[]="Tobi";
	char name2[]="Tomi";

	for (int i = 0; name1[i] != '\0' || name2[i] != '\0'; i++)
	{
		if (name1[i] != name2[i])
		{
			flag = 0;
			printf("not same\n");
			break;
		}
	}
	if (flag != 0)
	{
		printf("same string\n");
	}
}