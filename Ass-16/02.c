/*
Assignment-16: Level up with loops
02 Write a program to print first N terms of Fibonacci series
*/

#include<stdio.h>
#include<conio.h>

int main() {

int j=1, num1=0, num2=1, num3=0;

printf("Enter Term:- ");
scanf("%d", &j);

printf("First %d Term of fibonacci series is:-> \n", j);
  for (int i=1; i<=j; i++) {
    num1=num2;
    num2=num3;
    num3=num1+num2;
    printf("%d ", num2);

  }

 //printf("%dth term of fibonacci is:- %d\n", j, num2);

getch();
return 0;
}
