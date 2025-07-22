/*
Assignment-9: Decision Control Statements
03 Write a program to check whether a given alphabet is in uppercase or lowercase.
*/

#include<stdio.h>
#include<conio.h>

int main() {

char ch;
printf("Enter A alphabet :- ");
scanf("%c", &ch);

if(ch>='A' && ch<='Z')
    printf("Capital");
else if(ch>='a' && ch<='z')
    printf("Small");
else
    printf("Not a alphabet");


getch();
return 0;
}
