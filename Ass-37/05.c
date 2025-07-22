/*
Assignment-37: Strings and Functions
05. Write a function to check whether a given string is an alphanumeric string or not.
    (Alphanumeric string must contain at least one alphabet and one digit)

    A-Z | a-z
    (str[i]>= 'A'& str[i]<= 'Z')| (str[i]>= 'a' & str[i]<= 'z')
*/
#include<stdio.h>
int alphanumeric(char str[]){
    int i=0, isNum=0, isChar=0;

    while(str[i]){
        if(str[i]>='0'&str[i<='9'])
            isNum=1;
        if(str[i]>='a'&str[i]<='z')
            isChar=1;
        if(str[i]>='A'&str[i]<='Z')
            isChar=1;
        i++;
    }
    if(isNum&isChar)
        return 1;
    return 0;
}
int main(){
    char str1[]="sidd02";
    printf("%d", alphanumeric(str1));

return 0;
}
