/*
Assignment-21: Functions
05 Write a function to print first N odd natural numbers. (TSRN)
*/

#include<stdio.h>
#include<conio.h>
void oddNum(int limit) {
    for(int i=0; i<=limit; i++){
        if(i%2!=0)
        printf("%d ", i);
    }
}
int main() {
    oddNum(10);
return 0;
}
