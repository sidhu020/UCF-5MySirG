/*
Assignment-25: Recursion
01. Write a recursive function to print first N natural numbers
*/
#include<stdio.h>
int main() {

    void prinntNaturalNum(int num){

        if(num==0)
            return;
        prinntNaturalNum(num-1);
        printf("%d\n", num);
    }

prinntNaturalNum(10);
return 0;
}
