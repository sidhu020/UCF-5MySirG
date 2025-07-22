/*
Assignment-9: Decision Control Statements
05 Write a program to check whether a given number is divisible by 7 or divisible by 3.
*/


#include<stdio.h>
#include<conio.h>

int main() {

int a=21;

if(a%3==0)
    printf("%d Is Divisibile By 3", a);
else if(a%7==0)
    printf("%d Is Divisibile By 7", a);
else
    printf("%d Is Not Divisibile by 3 and 7");


if(a%3==0 || )
    printf("%d Is Divisibile By 3", a);
else if(a%7==0)
    printf("%d Is Divisibile By 7", a);
else
    printf("%d Is Not Divisibile by 3 and 7");

getch();
return 0;
}
