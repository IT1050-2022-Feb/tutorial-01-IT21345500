/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {


  float mark1,mark2; 
    float total, average;


  printf("Enter marks of two subjects: \n");
  scanf("%f%f", &mark1, &mark2);

   
    total = mark1 + mark2 ;
    average = total / 2.0;
    
  printf("Total marks = %.2f\n", total);
  printf("Average marks = %.2f\n", average);
     
  return 0;
}

