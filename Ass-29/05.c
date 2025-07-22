/*
Assignment-29: Arrays
05. Write a program to find the smallest number stored in an array of size 10.
    Take array values from the user.


*/
#include<stdio.h>

int main() {
    int a[10], sma=999;
    printf("Enter 10 values:");
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    sma=a[1];
    for(int i=0; i<10; i++){
        if(a[i]<sma )
            sma=a[i];
    }
    printf("\n greatest\ iss:%d", sam);
return 0;
}
