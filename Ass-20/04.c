/*
Assignment-20: switch case control
04
Write a program to check whether a given character is
vowel or consonant or some other special character
, using switch case statement.
*/

#include<stdio.h>

int main() {
    char ch='a';

    printf("Enter Character:- ");
    scanf("%c", &ch);

    switch(ch) {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("vowel");
        break;
    case 'b' ... 'd':
    case 'f' ... 'h':
    case 'j' ... 'n':
    case 'p' ... 't':
    case 'v' ... 'z':
    case 'B' ... 'D':
    case 'F' ... 'H':
    case 'J' ... 'N':
    case 'P' ... 'T':
    case 'V' ... 'Z':
        printf("consonant");
        break;
    default:
        printf("some other special character");
        break;

    }
return 0;

}
