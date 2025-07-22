/*
Assignment-36: Strings and Functions
01. Write a function to calculate length of the string.[TSRS]
*/

#include<stdio.h>
int length(char str[]){
    int i=0;

    while(str[i])
        i++;

    return i;

}

int main(){
    char str1[50];
    fgets(str, 50, stdin);



    printf("%d length", length(str1));

return 0;
}
