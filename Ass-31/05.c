/*
Assignment-31 : Arrays and Functions
05. Write a function to find the first occurrence of adjacent duplicate values in the array.
    Function has to return the value of the element.
*/
#include <stdio.h>

int main(){
int findDuplicate(int arr[], int l){

    for(int i=0; i<l; i++){
        for(int j=i+1; j<l; j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }

}

int a[15]={1, 2, 3, 4, 5, 6, 7, 8, 8, 4};
printf("%d", findDuplicate(a, 15));
return 0;
}
