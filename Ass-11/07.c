/*
Assignment-11: Iterative Control Statements
07 Write a program to print the first 10 even natural numbers in reverse order
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=10;

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
