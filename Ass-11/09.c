/*
Assignment-11: Iterative Control Statements
09 Write a program to print cubes of the first 10 natural numbers
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1;

while(i<=10) {
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
