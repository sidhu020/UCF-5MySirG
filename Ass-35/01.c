/*
Assignment-35: String Basics
01. Write a program to convert a given string into lowercase
*/

#include<stdio.h>
int main(){

    int i=0;
    char str[50];
    fgets(str, 50, stdin);
    fflush(stdin);
    while(str[i])
        i++;
    str[i-1]=str[i];
    printf("%s\n", str);

    i=0;
    while(str[i]){
        if(str[i]>=65 & str[i]<=90)
            str[i]=(str[i]+32);
        i++;
    }

    printf("%s\n", str);
return 0;
}
