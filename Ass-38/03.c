/*
Assignment-38: Strings and Functions
03. Write a function to count words in a given strings
*/

#include<stdio.h>

int input(char str[], int l){
    fgets(str, l, stdin);
    fflush(stdin);
    int i=0;
    while(str[i])
        i++;
    str[i-1]=' ';

    return i-1;
}

int countWord(char str[]){

    int i=0, isChar=0, isNotChar=0, isWord=0;

    while(str[i]){
        if(((str[i]>=33) && (str[i]<=126))){
            isChar=1;
        }else{
            isNotChar=1;
        }

        if(isChar&&isNotChar){
            isWord++;
            isNotChar=0;
            isChar=0;
        }
        i++;
    }
    return isWord;

}
int main(){
    char name[50];
    input(name, 50);
    printf("%d: words in %s", countWord(name), name);
return 0;
}
