/*
Assignment-24: More on Functions
02. Write a function to print first N terms of Fibonacci series (TSRN)
=> 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
*/

#include<stdio.h>
int main() {

void fibonacci(int num1){
    int a=-1, b=1, sum=0;

    for(int i=1; i<=num1; i++){
        sum = a + b;
        printf("%d\n", sum);
        a=b;
        b=sum;
    }
}
fibonacci(10);
return 0;
}
