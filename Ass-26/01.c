/*
Assignment-26: Recursion
01. Write a recursive function to print first N even natural numbers in reverse order
*/
#include<stdio.h>
int main() {

    void odd(int num){
        if(num == 0)
            return;
        printf("\n %d", 2*num);
        odd(num-1);
    }

odd(5);
return 0;
}
