/*
Assignment-41 : Handling multiple strings
04. Write a function to store all the words in a given string
    which are starting from 'a', in a two dimensional char array.
*/
#include<stdio.h>
#include<string.h>


void printArr(int n, int l, char str[n][l]){
    for(int i=0; i<n; i++)
        printf("%d: %s\n", i, str[i]);
}

void findAstring(int n, int l, char str[n][l], char str2[n][l]){
    int num=0;
    for(int i=0; i<n; i++){
        if(str[i][0]=='a' || str[i][0]=='A'){
            strcpy(str2[num], str[i]);
            num++;
        }
    }
}

void input(int n, int l, char str[n][l]){
    int i, j;
    for(i=0; i<n; i++){
        printf("Enter Name-%d:- ", i);
        fgets(str[i], l, stdin);
        fflush(stdin);
        for(j=0; str[i][j]; j++);
		str[i][j-1]='\0';//str[i][j]
    }
}


int main(){
    int n=5, l=20;
    char arr[n][l];
    char arr2[n][l];
    input(n, l, arr);
    findAstring(n, l, arr, arr2);
    printArr(n, l, arr2);
return 0;
}
