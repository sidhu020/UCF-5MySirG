/*
Assignment-22: Functions
01 Write a function to calculate the factorial of a number. (TSRS)
*/
#include <stdio.h>

int main() {
    int factorial(int num) {
    int mul=1;
    printf("Factorial of %d is:- ", num);
    for(int i=1; i<=num; i++)
        mul*=i;

    return mul;
    }
printf("%d", factorial(10));


return 0;
}
