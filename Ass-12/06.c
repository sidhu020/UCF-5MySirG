/*
Assignment-12: while loop
06 Write a program to print the first N even natural numbers
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j=1;

printf("Enter a number:- ");
scanf("%d", &j);

while(j>=i) {
    printf("%d\n", i+i);
    i++;
}
getch();
return 0;
}

/*

02 04 06 08 10 12 14 16 18 20 22
01 02 03 04 05 06 07 08 09 10 11

*/
