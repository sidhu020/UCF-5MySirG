/*
Assignment-38: Strings and Functions
01. Write a function to check whether a given string is palindrome or not.
*/

#include<stdio.h>
int isPalindrome(char str[]){

    int i=0;
    while(str[i])
        i++;
    int length=i, half=length/2, count=0;
    i=0;
    while(i<half){
        if(str[i]==str[length-i-1])
            count++;
        i++;
    }
    if(count==half)
        return 1;
    else
        return 0;

}
int main(){

    char name[]="rotator";
    printf("%d", isPalindrome(name));
return 0;
}
