/*
Assignment-42: Pointers
01. Write a function to swap values of two int variables (TSRN).
*/

#include<stdio.h>

void swap(int *p, int *q){
    int temp= *p;
    *p=*q;
    *q=temp;
}

int main(){
int a=5, b=10;
swap(&a, &b);
printf("a:%d, b:%d", a, b);
}
