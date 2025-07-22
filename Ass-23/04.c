/*
Assignment-23: More on Functions
04. Write a function to find the next prime number of a given number. (TSRS)
*/
#include<stdio.h>
int main(){

int nextPrime(int num){
    int i=num,j;

    for(i++; 1; i++){
        for(j=2; i>=j; j++){
            if(i%j == 0){
                break;
            }
        }
        if(i==j)
            return i;
    }
    return 0;
}

printf("%d", nextPrime(8));

return 0;
}


