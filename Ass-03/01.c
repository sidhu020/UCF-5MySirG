/*
Assignment-3: printf and scanf
01 Write a program to input a character from the user and print its ASCII code.
*/

#include<stdio.h>
#include<conio.h>

int main() {

char ch;


printf("Enter Charater:- ");
scanf("%c", &ch);

printf("ASCII of %c Is %d", ch, ch);

getch();
return 0;
}
