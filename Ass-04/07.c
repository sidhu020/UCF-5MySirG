/*
Assignment-4: Operators in C Language
07 Write a program to swap values of two int variables without using third variable and arithmetic operators.
*/
#include<stdio.h>
#include<conio.h>

int main() {

int a=7, b=5;


a=a^b;
b=a^b;
a=a^b;
printf("%d %d", a, b);

getch();
return 0;
}
