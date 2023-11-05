#include <stdio.h>

/** main - a simple program that executes
 * based on the user's input.
 * 
 * condition: only executes if the user enters a number greater than 5.
 */
 
int main (void){
   int age = 0;
   
   printf("enter a random number: ");
   scanf("%d", &age);
   
   if(age >= 18){
     printf("you can vote");
   }
   
   else if (age >= 40){
     printf("you're old but can vote");
   }
   
   else if(age >= 60){
     printf("you're too old to vote");
   }
   
   else{
     printf("you're ineligible to vote");
   }
   
   //return 0;
   //printf("\nend of program\n");
 }
