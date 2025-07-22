/*
Assignment-8: Decision Control Statement
03 Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a, b, c, d;

printf("Enter Value of a,b,c:- ");
scanf("%d%d%d", &a, &b, &c);

d=b*b-4*a*c;

if(d>0)
    printf("real & distinct");
else if(d<0)
    printf("imaginary roots");
else
    printf("real & equal ");

getch();
return 0;
}
