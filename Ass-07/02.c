/*
Assignment-7: Decision Control Statements
02 Write a program to check whether a given number is divisible by 5 or not
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a=10;

if(a%5 == 0)
    printf("Given Number is Divisibal by 5");
else
    printf("Not Divisibal");

getch();
return 0;
}
