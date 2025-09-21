/*
Assignment-41 : Handling multiple strings
02. Write a function to return the most repeating character in a list of strings.
*/
#include<stdio.h>
#include<string.h>
#define MAX_CHARS 256

void input(int n,  int l, char str[n][l]){
    for(int i=0; i<n; i++){
        printf("Enter %d str: ", i);
        fgets(str[i], l, stdin);
        int j=0;
        for(j=0; str[i][j]; j++);
        str[i][j-1]='\0';
    }
}

void printArr(int n, int l, char str[n][l]){
    for(int i=0; i<n; i++)
        printf("%d: %s\n", i, str[i]);
}

int mostRepitingChar(int n, int l, char strArr[n][l]){
    char countLetter[MAX_CHARS]={0};

    for(int i=0; i<n; i++){
        for(int j=0; strArr[i][j]; j++){
            if(strArr[i][j] != '\0'){
                countLetter[strArr[i][j]]++;
            }
        }
    }

    int max_value=0;
    int max_char='\0';
    for(int i=0; i<MAX_CHARS; i++){
        if(countLetter[i]>max_value){
            max_value=countLetter[i];
            max_char=i;
        }
    }
    return max_char;
}

int main(){
    int n=5, l=20;
    char str[n][l];
    input(n, l, str);
    //printArr(n, l, str);
    int value = mostRepitingChar(n, l, str);
    printf("%c \n", value);
return 0;
}
