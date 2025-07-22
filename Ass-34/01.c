/*
Assignment-34: String Basics
01. Write a program to calculate the length of the string. (without using builtin method)
*/

#include<stdio.h>
int main(){
    char str[50];
    int i, count=0;

    fgets(str, 50, stdin);

   for(i=0; str[i]; i++)
    count++;

    printf("%d", count-1);


return 0;
}
