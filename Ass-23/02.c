/*
Assignment-23: More on Functions
02. Write a function to calculate HCF of two numbers. (TSRS)
*/

#include<stdio.h>

int main() {
int hcf(int num1, int num2) {
    int a=num1, b=num2, i=(a>b?b:a);

    for(i; i>1; i--) {
        if(a%i==0 && b%i==0) {
            break;
        }
    }
    return i;
}

printf("%d", hcf(60, 75));
return 0;
}
