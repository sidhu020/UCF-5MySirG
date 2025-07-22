/*
Assignment-35: String Basics
05. Write a program to find first occurrence of a given character in a given string.
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

    char charFind='A';
    printf("Enter a char to find in %s.-", str);
    scanf("%c", &charFind);

    int length=i-1;
    i=0;
    while(str[i]){
        if(str[i]==charFind){
            printf("%c is found in %s at %d index:", charFind, str, i+1);
            break;
        }
        i++;
    }

    if(length==i)
        printf("%c is not found in %s :", charFind, str);
return 0;
}
