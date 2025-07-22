/*
Assignment-5: More on Operators in C Language
05 Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number (Example - number=234 and digit—g then the resulting number is 2349)
*/
#include<stdio.h>
#include<conio.h>

int main() {

int num=234, digit=9;
printf("%d", num*10+digit);


getch();
return 0;
}
