/*
Assignment-10: More on Decision Control Statements
01 Write a program to check whether a given number is positive, negative or zero.
*/


#include<stdio.h>
#include<conio.h>

int main() {

int num=0;

if(num>0)
    printf("Number Is Positive");
else if(num<0)
    printf("Number Is Nagative");
else
    printf("Zero");


getch();
return 0;
}
