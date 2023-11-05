#include <stdio.h>

int age;
int salary;
int new_salary;

int main (void)
{
 	int age;
	int salary;

	int new_salary;
	int new_salary2;

	printf("enter your age:\t");
	scanf("%d", &age);

	printf("enter your salary:\t");
	scanf("%d", &salary);

	new_salary=salary+(salary * 0.1);
	new_salary2=salary+(salary * 0.05);

	if(age>=60 &&salary<100)
	{
		printf("The new salary is %d:", new_salary);
	}
	else if(age>=60 &&salary>100)

	{
		printf("The new salary is %d" ,new_salary2);
	}
	else if(age<60 &&salary<70)
	{
		printf("The new salary is %d" ,new_salary );
	}
	else
	{
		printf("no increment");
	}
	return (new_salary);
}
