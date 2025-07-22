/*
Assignment-26: Recursion
03. Write a recursive function to print binary of a given decimal number
*/
#include<stdio.h>
int main() {
    void binary(int num){
        if(num==0)
            return;
        binary(num/2);
        printf("%d", num%2);
    }
    binary(57);
return 0;
}
