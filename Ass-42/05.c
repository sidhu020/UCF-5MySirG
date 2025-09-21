/*
Assignment-42: Pointers
05. Write a function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive),
    and store the extracted string in another char array.
    [ void extract_string(char *str, int start_index, int end_index, char *result); ]
*/

#include<stdio.h>
void extract_string(char *str, int start_index, int end_index, char *result);
int main(){
    char str[]="This is a test string";
    char result[20];
    extract_string(str, 0, 3, result);
    printf("\n%s", result);
}
void extract_string(char *str, int start_index, int end_index, char *result){
    for(int j=0, i=start_index; i<=end_index; i++, j++)
        result[j]=str[i];
}
