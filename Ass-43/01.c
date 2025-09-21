/*
Assignment-43: Pointers
01. Write a function to swap strings of two char arrays.
*/

#include<stdio.h>
#include<string.h>
void swapStr(char *str1, char *str2);
int main(){
    char str1[]="this is string 1";
    char str2[]="this is string 2";
    swapStr(str1, str2);
    printf("\nStr:1- %s", str1);
    printf("\nStr:2- %s", str2);
    return 0;
}

void swapStr(char *str1, char *str2){
    printf("function");
    char tempStr[200];
    strcpy(tempStr, str1);
    strcpy(str1, str2);
    strcpy(str2, tempStr);

}
