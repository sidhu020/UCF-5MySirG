/*
Assignment-3: printf and scanf
05 Write a program to print a given number without its last digit.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a;

printf("Enter Number:- ");
scanf("%d", &a);

printf("%d", a/10);

getch();
return 0;
}
