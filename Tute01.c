/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float avg;
  printf("Input marks of subject of 1:");
  scanf("%d",&mark1);
  printf("/nInput marks of subject of 2:");
  scanf("%d",&mark2);
  avg=(mark1+mark2)/2.0;
  printf("The average is: %.2f",avg);
  
  return 0;
}


