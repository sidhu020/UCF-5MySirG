/*
Assignment-25: Recursion
02. Write a recursive function to print first N natural numbers in reverse order
*/
#include<stdio.h>
int main() {

    void prinntNaturalNum(int num){

        if(num==0)
            return;
        printf("%d\n", num);
        prinntNaturalNum(num-1);
    }

prinntNaturalNum(5);
return 0;
}
