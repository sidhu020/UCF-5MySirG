/*
Assignment-24: More on Functions
04. Write a function to print all Armstrong numbers between two given numbers. (TSRN)
*/

#include <stdio.h>

int main()
{
    int check(int num){
        int numOfDigit=0, a=num, digit=1, sum=0, mul=1;
        while(a){
            a/=10;
            numOfDigit++;
        }
        a=num;

        while(a){
            digit=a%10;
            int i=numOfDigit-1;
            mul=digit;

            while(i){
                mul*=digit;
                i--;
            }

            sum+=mul;
            a/=10;
        }

        return num==sum?sum:0;
    }

    //printf("%d\n", check(153));

    void armGenrate(int len){
        int i=0, a=0;
        while(i<len){
            if(check(a)){
                printf("%d\n", a);
                i++;
            }
            a++;
        }
    }

    armGenrate(25);


    return 0;
}
