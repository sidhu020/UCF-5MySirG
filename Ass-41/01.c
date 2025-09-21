/*
Assignment-41 : Handling multiple strings
01. Write a program to find words ending with a letter 's'
    and store each such word in a 2d char array.
*/
#include<stdio.h>
#include<string.h>
void input(int n, int l, char str[n][l]){
    int i, j;
    for(i=0; i<n; i++){
        printf("Enter Name-%d:- ", i);
        fgets(str[i], l, stdin);
        for(j=0; str[i][j]; j++);
		str[i][j-1]='\0';//str[i][j]
    }
}

void printArr(int n, int l, char str[n][l]){
    for(int i=0; i<n; i++)
        printf("%d: %s\n", i, str[i]);
}

void findSstring(int n, int l, char str[n][l], char str2[n][l]){
    int num=0;
    for(int i=0; i<n; i++){
        int j;
        for(j=0; str[i][j]; j++);
        if(str[i][j-1]=='s'){
            strcpy(str2[num], str[i]);
            num++;
        }
    }
}
int main(){
    int n=5, l=20;
    char arr[n][l];
    char arr2[n][l];
    input(n, l, arr);
    findSstring(n, l, arr, arr2);
    printArr(n, l, arr2);
return 0;
}
