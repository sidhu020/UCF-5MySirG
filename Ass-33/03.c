/*
Assignment-33: Multi Dimensional Arrays

03. Write a program to print the transpose of a given matrix.
*/

#include<stdio.h>
#include<conio.h>

int main(){

    /*int arr1[3][3] = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                    };*/
    int arr1[2][5] = {
                    {1, 2, 3, 7, 8},
                    {4, 5, 6, 9, 0}
                    };
    int a=2, b=5;
    int arr2[b][a];

    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++){
            arr2[i][j]=arr1[j][i];
        }
        printf("\n");
    }

    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

return 0;
}
