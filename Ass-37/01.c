/*
Assignment-37: Strings and Functions
01. Write a function to count vowels in a given string.
*/

#include<stdio.h>
int countVowels(char str[]){
    int i=0, count=0;
    while(str[i]){
        char vowels[]="AEIOUaeiou";
        int j=0;
        while(vowels[j]){
            if(str[i]==vowels[j])
                count++;
            j++;
        }

        i++;
    }
    return count;
}

int main(){

    char name[]="AEIOU";

    printf("%d", countVowels(name));
    return 0;

}
