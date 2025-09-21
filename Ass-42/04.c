/*
Assignment-42: Pointers
04. Write a function to convert a given string into lowercase.
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
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
}
