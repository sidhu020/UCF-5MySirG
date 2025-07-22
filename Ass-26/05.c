/*
Assignment-26: Recursion
05. Write a recursive function to print reverse of a given number
*/

#include<stdio.h>

int main() {
    void reverse(int num){
        if(num == 0)
            return;
        printf("%d", num%10);
        reverse(num/10);
    }
    reverse(1234);
return 0;
}
