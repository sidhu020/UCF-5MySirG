/*
Assignment-27: More on Recursion
04. Write a recursive function to calculate sum of squares of first n natural numbers
*/

#include<stdio.h>
int main(){
    int sumofN(int n){
        if(n>0){
            return (n*n)+sumofN(n-1);
        }
    }
    printf("%d", sumofN(10));
return 0;
}
