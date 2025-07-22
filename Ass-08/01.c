/*
Assignment-8: Decision Control Statements
01 Write a program to check whether a given number is a three digit number or not.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int num;
printf("Enter a Number");
scanf("%d", &num);

if(num>=100 && num<=999)
    printf("The Number is 3 Digit Number");
else
    printf("The Number Is Not 3 Digit Number");

getch();
return 0;
}
