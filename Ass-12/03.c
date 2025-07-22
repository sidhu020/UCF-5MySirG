/*
Assignment-12: while loop
03 Write a program to print the first N natural numbers in reverse order
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=10, j=1;

printf("Ente a num:- ");
scanf("%d", &i);

while(i>=j) {
    printf("%d\n", i);
    i--;
}
getch();
return 0;
}


