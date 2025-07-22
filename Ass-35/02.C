/*
Assignment-35: String Basics
02. Write a program to reverse a string.
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

    int length=i-1, halfLength=length/2;

    for(i=0; i<halfLength; i++){
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
    printf("%s", str);

return 0;
}
