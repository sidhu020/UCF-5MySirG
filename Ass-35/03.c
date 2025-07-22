/*
Assignment-35: String Basics
03. Write a program in C to count the total number of
    alphabets, digits and special characters in a string.
*/

#include<stdio.h>
int main(){

    int i=0;
    char str[50];
    fgets(str, 50, stdin);

    while(str[i])
        i++;
    str[i-1]=str[i];

    int alp=0, dig=0, spchar=0;
    i=0;

    while(str[i]){
        if(((str[i]>=65)&(str[i]<=90)) || ((str[i]>=97)&(str[i<=122])))
            alp++;
        else if(str[i]>=48 & str[i]<=57)
            dig++;
        else
            spchar++;
        i++;
    }

    printf("\n%d:alphabets, %d:digits and %d:special characters in %s", alp, dig, spchar, str);

return 0;
}
