/*
Assignment-36: Strings and Functions
05. Write a function to transform a string into lowercase
*/

#include<stdio.h>

void inLow(char str[]){
int i=0;
while(str[i]){
    if(str[i]>='A'&str[i]<='Z')
        str[i]=str[i]+32;
    i++;
}
}
int main(){
    char name[]="AZHHUZ";
    inLow(name);
    printf("%s", name);
return 0;
}
