/*
Assignment-25: Recursion
05. Write a recursive function to print first N even natural numbers
*/
#include<stdio.h>
int main() {

    void odd(int num){
        if(num == 0)
            return;
        odd(num-1);
        printf("\n %d", 2*num);
    }

odd(5);
return 0;
}
