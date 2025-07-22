/*
Assignment-12: while loop
01 Write a program to print MySirG N times on the screen
*/
#include<stdio.h>
#include<conio.h>

int main() {

int i=1, j;

printf("How Many Times:- ");
scanf("%d", &j);

while(i<=j) {
    printf("MySirG\n");
    i++;
}
getch();
return 0;
}
