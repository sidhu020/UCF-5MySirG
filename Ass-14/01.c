/*
Assignment-14: Use any loop
01 Write a program to calculate factorial of a number
*/

#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j=1, fac=1;

printf("Enter Number for factorial:- ");
scanf("%d", &j);

while(i<=j){
    fac*=i;
    i++;
}

printf("%d", fac);

getch();
return 0;
}
