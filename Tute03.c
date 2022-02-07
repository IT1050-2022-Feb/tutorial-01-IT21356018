/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n, sum; 
 
   printf(" Input the number : ");
   scanf("%d", &n);
 
   sum = sumOfNumbers(n); 
   printf("\n %d\n\n", sum);
 
  
  return 0;
}

int sumOfNumbers(int n) 
{
   int k;
   if (n == 1) 
   {
      return (1);
   } else 
   {
      k = n + sumOfNumbers(n - 1); 
   }
   return (k);
}

