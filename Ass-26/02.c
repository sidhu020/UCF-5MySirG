/*
Assignment-26: Recursion
02. Write a recursive function to print squares of first N natural numbers
*/
#include<stdio.h>
int main() {

    void odd(int num){
        if(num == 0)
            return;
        odd(num-1);
        printf("\n %d %d",num,  num*num);
    }

odd(5);
return 0;
}
