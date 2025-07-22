/*
Assignment-10: More on Decision Control Statements
02 Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
*/


#include<stdio.h>
#include<conio.h>

int main() {

char ch = '-';

if(ch>='A' && ch<='Z')
    printf("Character Is uppercase");
else if(ch>='a' && ch<='z')
    printf("Character Is lowercase");
else if(ch>='0' && ch<='9')
    printf("Digit");
else
    printf("special character");



getch();
return 0;
}
