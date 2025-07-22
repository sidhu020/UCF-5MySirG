/*
Assignment-11: Iterative Control Statements
10 Write a program to print a table of 5.
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1;

while(i<=10) {
    printf("05 * %d = %d\n", i, 5*i);
    i++;
}
getch();
return 0;
}

/*

01 04 09 16 25 36 49 64 81 100
01 02 03 04 05 06 07 08 09 010

*/
