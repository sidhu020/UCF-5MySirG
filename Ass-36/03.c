/*
Assignment-36: Strings and Functions
03. Write a function to compare two strings.[TSRS]
*/

#include<stdio.h>
int length(char str[]){
    int i=0;
    while(str[i])
        i++;
    return i;
}

int check(char str[], char str1[]){
    int i=0, count=0, strLe=length(str), str1Le=length(str1);

    if(strLe==str1Le){
        while(str[i]){
            if(str[i]==str1[i])
                count++;
            i++;
        }

    }
    if(count==strLe)
        return 1;
    else
        return 0;
}
int main(){
    char name[]="Bsb@282004";
    char name1[]="Bsb@282004";

    printf("%d", check(name, name1));
    return 0;
}
