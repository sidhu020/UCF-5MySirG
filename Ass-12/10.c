/*
Assignment-12: while loop
10 Write a program to print a table of N.
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j=5;

printf("Enter a Table:- ");
scanf("%d", &j);

while(i<=10) {
    printf("%d * %d = %d\n", j, i, j*i);
    i++;
}
getch();
return 0;
}

/*

01 04 09 16 25 36 49 64 81 100
01 02 03 04 05 06 07 08 09 010

*/
