/*
Assignment-11: Iterative Control Statements
03 Write a program to print the first 10 natural numbers in reverse order
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=10;

while(i>=1) {
    printf("%d\n", i);
    i--;
}
getch();
return 0;
}
