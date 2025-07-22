/*
Assignment-21: Functions
02 Write a function to calculate simple interest. (TSRS)
    */

#include<stdio.h>
#include<conio.h>

float simIns(float p, float r, float n) {

        float si = (p*r*n)/100;
        return si;
    }


int main() {
    float si;

    si = simIns(10000, 10, 10);
    printf("%f", si);
return 0;
}
