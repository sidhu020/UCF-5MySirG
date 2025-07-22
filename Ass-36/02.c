/*
Assignment-36: Strings and Functions
02. Write a function to reverse a string.[TSRS]
*/

#include<stdio.h>

void reverse(char str[]){

    int i=0;
    while(str[i])
        i++;

    int length=i-1, half=length/2;
    i=0;
    while(i<=half){
        char temp = str[i];
        str[i]=str[length-i];
        str[length-i]=temp;

        i++;
    }

}
int main(){
    char name[]="abcde";
    reverse(name);
    printf("%s", name);
return 0;
}
