/*
Assignment-4: Operators in C Language
04 Write a program to swap values of two int variables
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a, b, c;

a=5;
b=6;

c=a;
a=b;
b=c;

printf("%d %d", a, b);


getch();
return 0;
}
