/*
Assignment-21: Functions
04 Write a function to print first N natural numbers (TSRN)
*/

#include<stdio.h>
#include<conio.h>

void natNum(int limit) {
    for(int i=0; i<=limit; i++) {
        printf("%d ", i);
    }
}
int main() {
    natNum(10);
return 0;
}
