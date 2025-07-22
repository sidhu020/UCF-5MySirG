/*
Assignment-23: More on Functions
03. Write a function to check whether a given number is Prime or not. (TSRS)
*/

#include<stdio.h>

int main() {
int checkPrime(int num1) {
    int a=num1, i;
    for(i=2; i<a; i++){
        if(a%i == 0){
            break;
        }
    }
    return i==a?1:0;
}

printf("%d", checkPrime(22));
return 0;
}
