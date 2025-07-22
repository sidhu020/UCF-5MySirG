/*
Assignment-24: More on Functions
05. Write a function to find the sum of first N terms of the series
        1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/ 5 ... n!/n (TSRS)
*/

#include<stdio.h>
int main() {
    int fac(int num){
        int n=num, fac=1;
        while(n){
            fac*=n;
            n--;
        }
        return fac;
    }

    //printf("%d", fac(10));

    int sum(int num){
        int n=1, sum=0;

        while(n<=num){
            sum+=(fac(n)/n);
            n++;
        }
        return sum;
    }

    printf("%d", sum(5));


    return 0;
}
