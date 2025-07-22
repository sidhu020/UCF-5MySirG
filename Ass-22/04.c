/*
Assignment-22: Functions
02 Write a function to check whether a given number contains a given digit or not. (TSRS)
*/
#include <stdio.h>

int main() {
int check(int num, int digit) {
        int copyNum = num, copyDigit = digit;

        while(copyNum>=1){
            if(copyNum%10 == digit){
                return 1;
            }else{
                copyNum/=10;
            }
        }
        return 0;
    }
    int num = 12358963, digit = 9;
    if(check(num, digit))
        printf("Digit Found");
    else
        printf("Digit Not Found");


    return 0;
}
