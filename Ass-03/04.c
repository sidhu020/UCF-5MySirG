/*
Assignment-3: printf and scanf
04 Write a program to print last digit of a given number
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a;

printf("Enter Number:- ");
scanf("%d", &a);

printf("%d", a%10);

getch();
return 0;
}
