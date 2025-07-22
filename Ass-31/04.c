/*
Assignment-31 : Arrays and Functions
04. Write a function to rotate an array by n position in d direction.
    The d is an indicative value for left or right.
    (For example, if array of size 5 is [32, 29, 40, 12, 70];
    n is 2 and d is left,
    then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/
#include <stdio.h>

int main()
{
    void swapArr(int arr[], int l, int n, int d){

        int arrTemp[l], num=n;
        if(d){
            num=l-num;
        }
        {
            int diffN=l-num;
            int diffP=num;

            for(int i=0; i<l; i++){
                if(i<diffN){
                    arrTemp[i]=arr[i+diffP];
                }else{
                    arrTemp[i]=arr[i-diffN];
                }
            }
        }

        for(int i=0; i<l; i++){
            printf("%d, ", arrTemp[i]);
        }
    }

    int b[5]={1, 2, 3, 4, 5};
    swapArr(b, 5, 2, 1);

    return 0;
}
