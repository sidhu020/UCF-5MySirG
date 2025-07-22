/*
Assignment-28: More on Recursion
05. Write a program in C to calculate the power of any number using recursion.
*/

#include<stdio.h>
int main(){
        int power(int num, int sup){
            if(sup==0)
                return 1;

            return num*power(num, sup-1);
        }

        printf("%d", power(2, 10));
return 0;
}
