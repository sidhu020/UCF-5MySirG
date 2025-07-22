/*
Assignment-23: More on Functions
01. Write a function to calculate LCM of two numbers. (TSRS)
*/

#include<stdio.h>

int main() {
int lcm(int num1, int num2) {
    int a=num1, b=num2, i=(a>b?a:b);

    for(i; i<=a*b; i++) {
        if(i%a==0 && i%b==0) {
            break;
        }
    }
    return i;
}

printf("%d", lcm(18, 46));
return 0;
}
