/*
Assignment-24: More on Functions
01. Write a function to print all Prime numbers between two given numbers. (TSRN)
*/

#include<stdio.h>
int main() {

void prime(int num1, int num2){
    int small, big;
    small = num1<num2?num1:num2;
    big = num1>num2?num1:num2;

    for(int i=small; i<=big; i++){
        for(int j=2; j<=i; j++){
            if(i==j){
                printf("%d\n", i);
            }
            if(i%j==0){
                break;
            }
        }
    }
}
prime(2, 9999);
return 0;
}
