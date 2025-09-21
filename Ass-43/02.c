/*
Assignment-43: Pointers
02. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
*/

#include<stdio.h>
#include<string.h>

void sort(int *ptr,int size);

int main(){
    int arr[]={11, 5, 6, 7, 10, 48, 63, 54, 69, 45, '\0'};
    sortArr(arr, 10);
    printf("\n");
    for(int i=0; arr[i]; i++)
        printf("%d, ", arr[i]);
    return 0;
}

void sortArr(int *arr, int l){
    for(int i=0; i<l; i++)
        for(int j=0; j<l-i-1; j++)
            if(arr[j]>arr[j+1]&&arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
}
