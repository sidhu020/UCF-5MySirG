/*
Assignment-34: String Basics
05. Write a program to convert a given string into uppercase
*/

#include<stdio.h>

int main(){

int i=0;

char str[50];
fgets(str, 50, stdin);
fflush(stdin);
for(i=0; str[i]; i++);
str[i-1]=str[i];
i=0;
while(str[i]){
    if(str[i]>='a'&str[i]<='z'){
        str[i]=(str[i]-32);
    }
    i++;
}

printf("%s", str);

return 0;
}
