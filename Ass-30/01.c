/*
Assignment-30: Arrays
01. Write a program to sort elements of an array of size 10. Take array values from the user.
*/
#include<stdio.h>

int main(){

    int a[10];

    printf("\nEnter value in Arry one by one:- ");

    for(int i=0;i<=9;i++){
        printf("\nEnter value on index:%d- ", i);
        scanf("%d", &a[i]);
    }

    for(int i=0;i<=9;i++){
        printf("%d, ",a[i]);
    }

    printf("\n");
    int count=0;
    while(count<9){
        count = 0;
        for(int i=0;i<=9; i++){
            if(a[i]>a[i+1]){
                int temp =a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }else{
                count++;
            }
        }
    }

    for(int i=0;i<=9;i++){
        printf("%d, ",a[i]);
    }
    return 0;
}
