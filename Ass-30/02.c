/*
Assignment-30: Arrays
02. Write a program to find second largest in an array. Take array values from the user.
*/
#include<stdio.h>

int main(){
    int a[10]= {19, 10, 8, 17, 9, 10, 20, 30, 40, 50};

    /*for(int i=0; i<=9; i++){
        printf("Enter Value For Index:%d- ", i);
        scanf("%d", &a[i]);
    }*/

    int s1, s2, b1, b2;
        s1=a[0];
        for(int i=0; i<=9; i++){
            if(s1>a[i]){
                s2=s1;
                s1=a[i];
            }
        }
    for(int i=0; i<=9; i++){
        printf("%d, ", a[i]);
    }
    printf("\ns1:- %d,s2:- %d", s1, s2);
    return 0;
}
