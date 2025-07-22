/*
Assignment-35: String Basics
04. Write a program in C to copy one string to another char array.
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

    char str1[50];

    while(str[i]){
        printf("%d\n", str[i]);
        i++;
    }

    i=0;

    while(str[i]){
        str1[i]=str[i];
        i++;
    }
    str1[i]='\0';

    printf("%s", str1);

return 0;
}
