/*
Assignment-11: Iterative Control Statements
04 Write a program to print the first 10 odd natural numbers
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1;

while(i<=10) {
    printf("%d\n", i+i-1);
    i++;
}
getch();
return 0;
}

/*

1 3 5 7 8 9 11 13 15 17 19
1 2 3 4 5 6 7  8  9  10 11

*/
