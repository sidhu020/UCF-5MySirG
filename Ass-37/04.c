/*
Assignment-37: Strings and Functions
04. Write a function to swap two characters of a given string with specified indices.
*/

/*

siddh
01234
12345

str, 1, 5

*/

#include<stdio.h>

void swap(char str[], int index1, int index2){

    int i=0;
    while(str[i])
        i++;
    index1-=1;
    index2-=1;

    if(index1<i&index2<i){
        char temp=str[index1];
        str[index1] = str[index2];
        str[index2] =temp;
    }

return 0;
}

int main(){
    char name[]="siddh";
    swap(name, 1, 6);
    printf("%s", name);

return 0;
}
