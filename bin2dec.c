#include <stdio.h>

/**
 * converts decimal value to binary
 */

int main(void){
	int n, i;
	printf("enter the number to be converted: ");
	scanf("%d", &n);

	printf("\n\n");
	printf("\t");

	for(i = 7; i >= 0; i--){
		if(n&(1<<i))
			printf("1");
		else
			printf("0");
	}
	printf("\n\n");
}
