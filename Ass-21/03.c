/*
Assignment-21: Functions
03 Write a function to check whether a given number is even or odd.
Return 1 if the number is even, otherwise return 0. (TSRS)
*/

#include<stdio.h>
#include<conio.h>

int numCheck(int num) {

    if(num%2 == 0){
        return 1;
    }else{
        return 0;
    }

}


int main() {
    int flag;

    flag = numCheck(10);

    printf("%d", flag);
return 0;
}
