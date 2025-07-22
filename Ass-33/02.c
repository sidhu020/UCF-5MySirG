/*
Assignment-33: Multi Dimensional Arrays

02. Write a program to calculate the product of two matrices each of order 3x3.
*/

#include<stdio.h>
#include<conio.h>

int main(){

    int a[3][3] = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                    };
    int b[3][3] = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                    };
    int c[3][3];
    long long int sum=1;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            c[i][j]=a[i][j]*b[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum*=c[i][j];
            //c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("%lld\n", sum);
    sum=1;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum*=a[i][j];
            sum*=b[i][j];
        }
    }
    printf("%lld
           \n", sum);


return 0;
}
