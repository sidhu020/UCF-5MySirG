/*
Assignment-13: Use any loop
04 Write a program to calculate sum of squares of first N natural numbers
*/

#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j=5, sum=0;

printf("Enter A number:- ");
scanf("%d", &j);

for(i; i<=j; i++) {
    sum=(i*i)+sum;
}
printf("%d", sum);

getch();
return 0;
}
