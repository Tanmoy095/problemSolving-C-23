//1. Write a program in C that takes a variable n from user and calculates the factorial of n using for loop.

#include <stdio.h>
void main(){
  int i,factorial=1,num;

  printf("Enter any positive number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      factorial=factorial*i;

  printf("The Factorial of %d is: %d\n",num,factorial);
}

