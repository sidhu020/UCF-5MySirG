/*
Assignment-30: Arrays
04. Write a program to sort an array of 10 elements in descending order.
*/
#include<stdio.h>

int main(){

    int a[10]= {19, 50, 8, 17, 9, 10, 20, 30, 40, 10};
    int count=0;
    while(count<9){
        count=0;

        for(int i=0; i<=9; i++){
            if(a[i]<a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }else{
                count++;
            }
        }
    }

    for(int i=0; i<=9; i++){
        printf("%d, ", a[i]);
    }


    return 0;
}
