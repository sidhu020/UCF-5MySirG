/*
Assignment-12: while loop
07 Write a program to print the first N even natural numbers in reverse order
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j=1;

printf("Enter Number:- ");
scanf("%d", &i);

while(i>=1) {
    printf("%d\n", i+i);
    i--;
}
getch();
return 0;
}

/*

02 04 06 08 10 12 14 16 18 20 22
01 02 03 04 05 06 07 08 09 10 11

*/
