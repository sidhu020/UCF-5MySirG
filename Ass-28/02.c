/*
Assignment-28: More on Recursion
02. Write a recursive function to calculate HCF of two numbers
*/

#include<stdio.h>
int main(){
    void hcf(int num1, int num2){

        int small = num1>num2?num2:num1;
        int big = num1<num2?num2:num1;
        int rmd=0;

        if((big%small) == 0){
            printf("%d", small);
            return;
        }

        rmd = big%small;
        hcf(small, rmd);


    }

hcf(56, 84);

return 0;
}
