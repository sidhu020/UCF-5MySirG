/*
Assignment-8: Decision Control Statements
02 Write a program to print greater between two numbers. Print one number if both are the same.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int num1, num2;
printf("Enter a Number-1:- ");
scanf("%d", &num1);

printf("Enter a Number-2:- ");
scanf("%d", &num2);

if(num1>num2)
    printf("Num 1 is Big");
else if(num1<num2)
    printf("Num 2 is Big");
else
    printf("%d", num1);

getch();
return 0;
}
