#include <stdio.h>

/**
* main - this program will increase the salary
* of workers above 60years as follows:
* if salary > 100, then 5%. else, 10%.
* if age is less than 60 but salary < 70
* then 10%, else none.
*/

int main(void)
{
	int age;
	int salary;
	int new_salary = 0;

	printf("please enter your age:");
	scanf("%d", &age);

	printf("how much is your salary?\t");
	scanf("%d", &salary);

	if (age >= 60)
	{
		if (salary >= 100)
		{
			new_salary = salary + (salary * 0.05);
			printf("your new salary is %d\n", new_salary);
		}
		else
		{
			new_salary = salary + (salary * 0.1);
			printf("your new salary is %d\n", new_salary);
		}
	}
	else
	{
		if (salary <= 70)
		{
			new_salary = salary + (salary * 0.1);
			printf("your new salary is %d\n", new_salary);
		}
		else
			printf("sorry, no increment for today");
	}
}
