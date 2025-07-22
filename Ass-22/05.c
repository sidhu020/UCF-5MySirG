/*
Assignment-22: Functions
05 Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
#include <stdio.h>

int main() {
int nextPrime(int num){
    int copyNum = num;
    copyNum++;
        for(copyNum; copyNum>=num; copyNum++)
            for(int i=2; copyNum>=i; i++)
                if(copyNum%i==0){
                    if(copyNum==i)
                        return copyNum;
                    break;
                }
    return 0;
}

void primeFac(int num){
    int copyNum = num, primeNum=2;
    while(copyNum>1){
        if(copyNum%primeNum==0){
            copyNum = copyNum/primeNum;
            printf("%d, ", primeNum);
        } else {
            primeNum = nextPrime(primeNum);
        }
    }
}

        primeFac(3825);
return 0;
}
