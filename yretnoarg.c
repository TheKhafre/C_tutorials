#include <stdio.h>

/**
 * main - print multiples of integer entered
 * retmul - returns the multiple of 12
 * of any number entered by the user
 *
 */

int retmul(void){
	static int i = 0, num = 0, a = 0;

	printf("enter a number: ");
	scanf("%d", &num);

	while(i <= 12){
		a = i * num;
		i++;
	}
	return a;
	printf("hello world!");
}

int main(void)
{
	int s = 0, i;
	for(i = 1; i <= 12; i++){
		s = retmul();
		printf("\n\tthe result is %d\n\n", s);
	}
}
