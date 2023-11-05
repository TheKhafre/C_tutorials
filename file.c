#include <stdio.h>

/**
 * this program checks students grade
 * from A to D and awards the grade accordingly
 *
 * return: grade according to score
 */
 
 int main (void){
   int score = 0;
   
   printf("enter your score: ");
   scanf("%d", &score);
   
   if(score > 80){
     printf("\nyour grade is A\n");
   }
   else if(score >= 70){
     printf("your grade is B\n");
   }
   else if(score >= 60){
     printf("your grade is C\n");
   }
   else {
     printf("your grade is F\n");
     printf("see you next session\n");
   }
   
   printf("thank you!\n");
   return 0;
 }
