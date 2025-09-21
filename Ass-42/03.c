/*
Assignment-42: Pointers
03. Write a function to convert a given string into uppercase.
*/

#include<stdio.h>

int main(){
    char str[]="sIdDhArTh";
    upperStr(&str);
    printf("\n %s", str);
}

void upperStr(char *str){
    int i=0;
    for(i; str[i]; i++)
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
}
