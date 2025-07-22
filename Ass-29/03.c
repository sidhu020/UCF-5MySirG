/*
Assignment-29: Arrays
03. Write a program to calculate the sum of all even numbers and sum of all odd numbers,
    which are stored in an array of size 10. Take array values from the user.

*/
#include<stdio.h>

int main() {
    int a[10], sumE=0, sumO=0;
    printf("Enter 10 values:");
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }

    for(int i=0; i<10; i++){
        if(a[i]%2==0)
            sumE+=a[i];
        else
            sumO+=a[i];
    }
    printf("\n SumE is:%d and SumO is:%d", sumE, sumO);
return 0;
}
