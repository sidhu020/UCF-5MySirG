/*
Assignment-28: More on Recursion
03. Write a recursive function to print first N terms of Fibonacci series
*/

#include<stdio.h>
int main(){

    void fibo(int n, int a, int b){

        if(n==0)
            return;

        int c=a+b;
        printf("%d, ", c);
        fibo(n-1, b, c);
    }

    fibo(10, -1, 1);

return 0;
}
