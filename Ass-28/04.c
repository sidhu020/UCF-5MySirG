/*
Assignment-28: More on Recursion
04. Write a program in C to count the digits of a given number using recursion.
*/

#include<stdio.h>
int main(){

    int count(int num){
        if(num == 0)
            return 0;

        return 1+count(num/10);
    }

    printf("%d", count(1234567890));

return 0;
}
