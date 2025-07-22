/*
Assignment-16: Level up with loops
03 Write a program to check whether a given number is there in the Fibonacci series or not.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j=1, num1=0, num2=1, num3=0;

printf("Enter Term:- ");
scanf("%d", &j);

  for (i; i<=j; i++) {
    num1=num2;
    num2=num3;
    num3=num1+num2;
    printf("%d + %d = %d", num1, num2, num3);
    if(j==num3) {
        printf("The Number is find as fibonaci\n :The Term is:- %d\n :%d + %d = %d\n", i-1, num1, num2, num3);
        break;
    }
  }

  if(j<i) {
    printf("Not found");
  }
getch();
return 0;
}
