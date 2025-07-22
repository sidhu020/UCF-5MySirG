/*
Assignment-34: String Basics
02. Write a program to count the occurrence of a given character in a given string.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){


    char str[50], findChar;
    int i=0, count=0;

    printf("Enter String:");
    fgets(str, 50, stdin);
    fflush(stdin);

    printf("Enter a Char:");
    scanf("%c", &findChar);

    while(str[i]){
        if(str[i]==findChar){
            count++;
        }
        i++;
    }

    if(count)
        printf("%c is %d times in %s", findChar, count, str);
    else
        printf("%c is not found in %s", findChar, str);


return 0;
}
