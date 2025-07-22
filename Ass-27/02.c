/*
Assignment-27: More on Recursion
02. Write a recursive function to calculate sum of first N odd natural numbers
*/

#include<stdio.h>
int main(){
    int sumofN(int n){
        if(n>0){
            return (2*n-1)+sumofN(n-1);
        }
    }
    printf("%d", sumofN(10));
return 0;
}
