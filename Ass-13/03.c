/*
Assignment-13: Use any loop
03 Write a program to calculate sum of first N odd natural numbers
*/

#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j=5, sum=0;

printf("Enter A number:- ");
scanf("%d", &j);

for(i; i<=j; i++) {
    sum=(i+i)+sum;
}
printf("%d", sum);

getch();
return 0;
}
