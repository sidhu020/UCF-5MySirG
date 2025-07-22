/*
Assignment-7: Decision Control Statements
03 Write a program to check whether a given number is an even number or an odd number.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a=12;

if(a%2 == 0)
    printf("Odd");
else
    printf("Even");

getch();
return 0;
}
