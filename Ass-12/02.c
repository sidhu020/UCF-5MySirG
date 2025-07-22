/*
Assignment-12: while loop
02 Write a program to print the first N natural numbers.
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j;

printf("How Many Nuber:- ");
scanf("%d", &j);
while(i<=j) {
    printf("%d\n", i);
    i++;
}
getch();
return 0;
}
