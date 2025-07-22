/*
Assignment-37: Strings and Functions
02. Write a function to find a character in a given string.
    Return index of first occurrence of given character.
    Return -1 if character not found.
*/

#include<stdio.h>
int findChar(char str[], char find){
    int i=0;
    while(str[i]){
        if(str[i]==find)
            return i+1;
        i++;
    }
    return -1;
}

int main(){
    char name[]="borisagar siddharth";

    printf("%d", findChar(name, 'z'));
return 0;
}
