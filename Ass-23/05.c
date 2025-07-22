/*
Assignment-23: More on Functions
05. Write a function to print first N prime numbers (TSRN)
*/
#include<stdio.h>
int main() {

int prime(int num){
    int a=0;
            for(int i=2; num>a; i++){
                for(int j=2; j<=i; j++) {
                    if(i==j){
                        printf("%d\n", i);
                        a++;
                    }
                    if(i%j == 0){
                        break;
                    }
                }
            }
}
prime(10);
return 0;
}
