#include <stdio.h>

/**
 * this simple program deals with basic
 * examples of the relational operators
 * in the c programming language.
 *
 */

int main (void)
{
	int i = 12, m = 15;
	int j, k, l;

	j = 16;
	k = 19;
	l = 16;

	/*printf("\n\t%d\n\n", i<j); //1
	printf("\n\t%d\n\n", m<j); //0
	printf("\n\t%d\n\n", j>k); //0
	printf("\n\t%d\n\n", i>j<k>l>m);*/
	//0>1<1>0
	//0<0>1
	//0>0
	//0
	//
	
	printf("\n\t%d\n\n", j == l); //1
	printf("\n\t%d\n\n", l == m); //0
	printf("\n\t%d\n\n", m+1 == j); //1
	printf("\n\t%d\n\n", j+2 > k);
	printf("\n\t%d\n\n", j >= l);



	//printf("j = %d\n", j); //15
	//printf("k = %d\n", k); //16
	//printf("l = %d\n", l); //16

	return 0;
}
