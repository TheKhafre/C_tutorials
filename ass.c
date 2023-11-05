#include <stdio.h>

/**
 * without running the program, assume what the possible outcome will be
 * and after running the program, explain why we have the returned outcome
 */
 
 int main (void)
 {
   int i, j, k, l, sum, res, test;
   i = 5;
   j = 1;
   k = 7;
   l = -1;
   
   sum = l + j && printf("tayo");
   res = j < k || 0;
   test = i > l || l++;
   
   printf("\n\tsum = %d\n", sum); //0
   printf("\n\tres = %d\n", res); //1
   printf("\n\ttest = %d\n", test); //1
   printf("\n\tthe result is %d\n", i && l);//1
   printf("\n\t the value of l is %d\n", -l);
   
   return (0);
 }
