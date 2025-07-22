/*
Assignment-7: Decision Control Statements
05 Write a program to check whether the given number is even or odd using a bitwise operator.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int num = 5;

if(num&1) // 4/2=2*2=4==4=1; 3/2=1*2=2==3=0
    printf("Odd");
else
    printf("Even");

getch();
return 0;
}
