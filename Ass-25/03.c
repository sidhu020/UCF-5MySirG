/*
Assignment-25: Recursion
03. Write a recursive function to print first N odd natural numbers
*/
#include<stdio.h>
int main() {

    void odd(int num){
        if(num == 0)
            return;
        odd(num-1);
        printf("\n %d", 2*num-1);
    }

odd(5);
return 0;
}
