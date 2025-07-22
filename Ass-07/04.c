/*
Assignment-7: Decision Control Statements
04 Write a program to check whether a given number is an even number or an odd number without using % operator.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int num = 4;

if(num/2*2==num) // 4/2=2*2=4==4=1; 3/2=1*2=2==3=0
    printf("Even");
else
    printf("Odd");

getch();
return 0;
}
