/*
Assignment-25: Recursion
04. Write a recursive function to print first N odd natural numbers in reverse order
*/
#include<stdio.h>
int main() {

    void odd(int num){
        if(num == 0)
            return;
        printf("\n %d", 2*num-1);
        odd(num-1);
    }

odd(5);
return 0;
}
