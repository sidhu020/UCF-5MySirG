/*
Assignment-5: More on Operators in C Language
01 Write a program to input a three digit number and display the sum of the digits.
*/
#include<stdio.h>
#include<conio.h>

int main() {

int a=789;

printf("The Sum Of %d, %d, %d = %d", a/100, a%100/10, a%10, (a/100)+(a%100/10)+(a%10));

getch();
return 0;
}
