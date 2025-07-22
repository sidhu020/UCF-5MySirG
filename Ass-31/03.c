/*
Assignment-31 : Arrays and Functions
03. Write a function to sort an array of any size. (TSRN)
*/

#include <stdio.h>

int main() {

    void sort(int arr[], int l){

        for(int i=0; i<l; i++){
            for(int j=0; j<l-i; j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(int i=0; i<l; i++)
            printf("%d, ", arr[i]);
    }

    int a[10]={15, 41, 21, 02, 89, 55, 65, 96, 12, 45};
    sort(a, 10);
    return 0;
}
