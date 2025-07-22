/*
Assignment-12: while loop
09 Write a program to print cubes of the first N natural numbers
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j=5;

printf("Enter a number:- ");
scanf("%d", &j);

while(i<=j) {
    printf("%d\n", i*i*i);
    i++;
}
getch();
return 0;
}

/*

01 04 09 16 25 36 49 64 81 100
01 02 03 04 05 06 07 08 09 010

*/
