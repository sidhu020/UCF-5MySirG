/*
Assignment-30: Arrays
03. Write a program to find the second smallest number in an array. Take array values from the user.
*/
#include<stdio.h>

int main(){

    int a[10]= {19, 10, 8, 17, 9, 10, 20, 30, 40, 50};
    int b1, b2;
    b1=a[0];

    for(int i=0; i<=9; i++){
        if(a[i]>b1){
            b2=b1;
            b1=a[i];
        }
    }

    for(int i=0; i<=9; i++){
        printf("%d, ", a[i]);
    }
    printf("B1:- %d; B2:- %d", b1, b2);

    return 0;
}
