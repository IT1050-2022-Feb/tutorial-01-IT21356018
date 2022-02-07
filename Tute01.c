/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float marks1, marks2, total, avg;

  printf("Enter the first marks :");
  scanf("%f",&marks1);
  printf("\n");
  printf("Enter the second marks :");
  scanf("%f",&marks2);
  printf("\n");

  total=marks1+marks2;
  avg=total/2;

  printf("Total : %.2f",total);
  printf("\n");
  printf("Average : %.2f",avg);
  
  return 0;
}

