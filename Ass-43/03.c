/*
Assignment-43: Pointers
03. Write a function to merge two arrays in a given array.
    [ void merge(int *arrl , int sizel , int *arr2, int size2, int *arr3); ]
*/

#include<stdio.h>
#include<string.h>
void strMerge(char *str1, char *str2, char *merStr){
    int totalCount=0, i=0, j=0;
    for(int z=0; str1[z]; z++)
        totalCount=z;
    strcpy(merStr, str1);
    for(i=totalCount+1, j=0; str2[j]; i++, j++)
        merStr[i]=str2[j];
    merStr[i]='\0';
}

int main(){

        char str1[]="Borisagar";
        char str2[]=" Siddharth";
        char merStr[100];
        strMerge(str1, str2, merStr);

        printf("%s", merStr);


return 0;
}
