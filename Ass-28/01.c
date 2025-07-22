/*
Assignment-28: More on Recursion
01. Write a recursive function to calculate factorial of a given number
*/

#include<stdio.h>
int main(){
int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
}

printf("%d", factorial(9));
return 0;
}
