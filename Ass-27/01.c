/*
Assignment-27: More on Recursion
01. Write a recursive function to calculate sum of first N natural numbers
*/

#include<stdio.h>
int main(){
    int sumofN(int n){
        if(n>0){
            return n+sumofN(n-1);
        }
    }

    printf("%d", sumofN(5));
return 0;
}
