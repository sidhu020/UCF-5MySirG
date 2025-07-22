/*
Assignment-9: Decision Control Statements
04 Write a program to check whether a given number is divisible by 3 and divisible by 2.
*/


#include<stdio.h>
#include<conio.h>

int main() {

int a=12;

if(a%3==0 && a%2==0) {
    printf("%d Is Divisibile By 3 and 2", a);
}else{
    printf("%d Is not Divisibile By 3 and 2", a);
}

getch();
return 0;
}
