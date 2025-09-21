/*
Assignment-42: Pointers
02. Write a function to search all occurrences of a given character in a given string.
Result of search is a list of indices to be stored in the given array.
[void search_all_occurrences(char *str, char Ch, int *arr);]
*/

#include<stdio.h>

void search_all_occurrences(char *str, char Ch, int *arr);

int main(){
    char str[]="this is a test string";
    int arr[20];
    search_all_occurrences(&str[0], 't', &arr[0]);

    printf("\n%s\n", str);
    for(int j=0; arr[j]; j++)
        printf("%d, ", arr[j]);
}

void search_all_occurrences(char *str, char Ch, int *arr){
    int count=0, i=0;
    for(i=0; str[i]; i++){
        if(str[i]==Ch){
            arr[count]=i;
            count++;
        }
    }
    arr[count]=str[i];
}
