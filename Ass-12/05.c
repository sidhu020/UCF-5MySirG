/*
Assignment-12: while loop
05 Write a program to print the first N odd natural numbers in reverse order.
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j=1;

printf("Enter a number:- ");
scanf("%d", &i);


while(j<=i) {
    printf("%d\n", i+i-1);
    i--;
}
getch();
return 0;
}

/*

1 3 5 7 8 9 11 13 15 17 19
1 2 3 4 5 6 7  8  9  10 11

*/
