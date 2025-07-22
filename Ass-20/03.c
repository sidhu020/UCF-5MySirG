/*
Assignment-20: switch case control
03 Write a program to check whether a given character is
uppercase alphabet
or lower case alphabet
or some other special character

, using switch case statement.
*/

#include<stdio.h>

int main() {

    char ch='A';
    printf("Enter Character to check:- ");
    scanf("%c", &ch);

    switch(ch) {
    case 'A' ... 'Z':
        printf("%c is Uppercase", ch);
        break;
    case 'a' ... 'z':
        printf("%c is Lowercase", ch);
        break;
    default:
        printf("%c is not alphabet it is special character", ch);

    }

return 0;
}
