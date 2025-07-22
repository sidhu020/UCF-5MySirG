/*
Assignment-27: More on Recursion
05. Write a recursive function to calculate sum of digits of a given number
*/

#include<stdio.h>
int main(){
    int sumofN(int n){
        if(n>0){
            return (n%10)+sumofN(n/10);
        }
    }
    printf("%d", sumofN(9999));
return 0;
}
