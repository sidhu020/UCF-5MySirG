/*
Assignment-29: Arrays
02. Write a program to calculate the average of numbers stored in an array of size 10.
    Take array values from the user.
*/
#include<stdio.h>

int main() {
    int a[10], sum=0;
    printf("Enter 10 values:");
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }

    for(int i=0; i<10; i++){
        sum+=a[i];
    }
    printf("\n avg iss:%d", sum/10);
return 0;
}
