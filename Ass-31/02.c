/*
Assignment-31 : Arrays and Functions
02. Write a function to find the smallest number from the given array of any size. (TSRS)

*/

#include <stdio.h>

int main() {
    int greter(int arr[], int length){
        int gretest = arr[0];
        for(int i=0; i<=length; i++){
            if(gretest>arr[i]){
                gretest = arr[i];
            }
        }
        return gretest;
    }

    int a[10]={15, 89, 3, 63, 78, 25, 14, 30, 2, 56};
    printf("%d", greter(a, 10));
    return 0;
}
