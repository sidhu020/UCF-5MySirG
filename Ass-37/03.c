/*
Assignment-37: Strings and Functions
03. Write a function to find character in a given string
    between specified indices
    (start index (inclusive) and end index(exclusive) .
*/
#include<stdio.h>

int findChar(char str[], char find, int inclusive, int exclusive){
     int i=0;

     while(str[i]){
        if(i>=inclusive-1 & i<=exclusive-1)
            if(str[i]==find)
                return i+1;
        i++;
     }
     return -1;
}

int main(){

char name[]="Borisagar SIDdharth";
printf("%d", findChar(name, 'd', 1, 20));

return 0;
}
