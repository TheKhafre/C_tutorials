#include <stdio.h>

/**
 * this simple program checks user input
 * it checks from 1 - 4 and returns a particular response
 */
 
 int main(void){
   int mynum;
   
   printf("please select a number from 1 till 4");
   scanf("%d", &mynum);
   
   switch(mynum){
     case 1: printf("jackpot!");
     break;
     case 2: printf("bingo!");
     break;
     case 3: printf("perfect!");
     break;
     case 4: printf("omo ologo!");
     break;
     default: printf("ma fo!");
   }
 }
