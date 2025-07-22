/*
Assignment-36: Strings and Functions
04. Write a function to transform string into uppercase
*/
#include<stdio.h>
void inUpper(char str[]){
int i=0;
while(str[i]){
    if(str[i]>='a'&str[i]<='z'){
        str[i]-=32;
    }
    i++;
}
}
int main(){
    char name[]="acdhsjcgufguegfwgHUEUVEUVz";
    inUpper(name);
    printf("%s", name);
return 0;
}
