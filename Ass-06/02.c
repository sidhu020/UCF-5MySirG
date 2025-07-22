/*
Assignment-6: More on Operators in C Language
02 Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a=567;

printf("%d", a%100*10+a/100);

getch();
return 0;
}
