/*
Assignment-3: printf and scanf
02 Write a program to input an ASCII code from the user and print its corresponding character.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int ch_ascii;

printf("Enter The ASCII Value:- ");
scanf("%d", &ch_ascii);

printf("%d = %c",ch_ascii, ch_ascii);

getch();
return 0;
}
