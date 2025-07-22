/*
Assignment-26: Recursion
04. Write a recursive function to print octal of a given decimal number
*/

#include<stdio.h>

int main() {
    void binary(int num){
        if(num==0)
            return;
        binary(num/8);
        printf("%d", num%8);
    }
    binary(8);
return 0;
}
