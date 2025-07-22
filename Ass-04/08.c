/*
Assignment-4: Operators in C Language
08 Write a program to swap values of two int variables in single line arithmetic expression.
*/
#include<stdio.h>
#include<conio.h>

int main() {

int a=7, b=5;
a=a+b-(b=a);

printf("%d %d", a, b);

getch();
return 0;
}
