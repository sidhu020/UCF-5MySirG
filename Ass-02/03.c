/*
Assignment-2: printf and scanf
03 Write a program to calculate simple interest.
*/

#include<stdio.h>

int main() {

int p,r,n;
float interst;

printf("Enter Value of PRN:- ");
scanf("%d%d%d", &p, &r, &n);

interst = (p+r+n)/100

printf("The Simple Interest is :- %d", interst);
getch();
return 0;
}
