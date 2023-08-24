#include <stdio.h>

/** main - the program takes the 
* array function arg passed and returns
* the sum.
*
* return: the average in the function
*/

int avg(int arr[], int a);
int main(void)
{
	/* code */
	int average;
	int marks[5] = {10, 15, 20, 30, 45};

	average = avg(marks, 5);
	printf("average is %d\n", average);
	return 0;
}

int avg(int arr[], int a)
{
	int i, sum = 0, average = 0;

	for (int i = 0; i < a; ++i)
	{
		/* function code */
		sum = sum + arr[i];
	}
	average = sum / a;
	return average;
}