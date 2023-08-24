#include <stdio.h>

int main(void)
{
    /*char name[] = {'a', 'b'};
    int i;
    printf("my name is %x", &name);*/

    int my_age;
    printf("enter your age:\t");
    scanf("%d", &my_age);

    // printf("\n\n i am %d years old", age);

    if (my_age < 20)
        printf("\n\n hey boy, time to go home\n");
    else
        printf("\n\n will you be my boyfriend\n");
}
