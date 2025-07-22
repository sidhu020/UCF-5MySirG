/*
Assignment-30: Arrays
05. Write a program in C to copy the elements of one array into another array. Take array values from the user.
*/
#include<stdio.h>

int main(){

    int a[10]= {19, 10, 8, 17, 9, 10, 20, 30, 40, 50};
    int b[10];

    for(int i=0; i<=9; i++){
        b[i]=a[i];
    }

    for(int i=0; i<=9; i++){
        printf("%d, ", a[i]);
    }
    printf("\n");
    for(int i=0; i<=9; i++){
        printf("%d, ", b[i]);
    }

    return 0;
}
