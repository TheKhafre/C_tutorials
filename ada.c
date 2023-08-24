#include <stdio.h>


/**
 * main - entry point
 * Return: zero at success
*/


int main(void)
{
        int age;
        int salary;
        int new_salary;


        printf("Enter your age: ");
        scanf("%d", &age);


        printf("Enter your salary: ");
        scanf("%d", &salary);


    if ((age >= 60) && (salary < 100000))
    {
            new_salary = salary + (salary * 0.1);
            printf("new_salary: %d\n", new_salary);
    }
    else if ((age >= 60) && (salary >= 100000))
    {
                new_salary = salary + (salary * 0.05);
                printf("new_salary: %d\n", new_salary);
        }
        else if ((age < 60) && (salary < 70000))
        {
                new_salary = salary + (salary * 0.1);
                printf("new_salary: %d\n", new_salary);
        }
        else
        {
    printf("No increment today\n");
        }
        return (0);
}
