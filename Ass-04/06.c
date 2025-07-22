/*
Assignment-4: Operators in C Language
06 Write a program to swap values of two int variables without using third variable and without using +, - operators.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a, b;
a=5;
b=6;

a=a*b;
b=a/b;
a=a/b;

printf("%d %d", a, b);

getch();
return 0;
}
