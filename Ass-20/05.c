/*
Assignment-20: switch case control
05
Write a menu driven program with the following options:
    Calculate LCM of two numbers
    Calculate sum of the digits of a number
    Volume of a cuboid
    Check whether a given number is Prime or not
    Exit
*/
#include<stdio.h>

int main() {
    int flag = 1, choice = 0;

    int lcmNum1 = 0, lcmNum2 = 0, i=0;
    int num = 0, copyNum = 0, length=0, temp=0, sum=0;
    int l=0, b=0, h=0, v=0;
    int numPrime=0, j=0;

    while(flag) {
            printf("\n1. Calculate LCM of two numbers");
            printf("\n2. Calculate sum of the digits of a number");
            printf("\n3. Volume of a cuboid");
            printf("\n4. Check whether a given number is Prime or not");
            printf("\n5. Exit");

            printf("\nEnter Choise:- ");
            scanf("%d", &choice);

            switch(choice) {
            case 1:
                printf("\n1. Calculate LCM of two numbers");
                printf("\nEnter 2 Value to find LCM:- ");
                scanf("%d %d", &lcmNum1, &lcmNum2);
                for(i=(lcmNum1>lcmNum2?lcmNum1:lcmNum2); i<=lcmNum1*lcmNum2; i++) {
                    if(i%lcmNum1==0 && i%lcmNum2==0) {
                        break;
                    }
                }

                printf("\n%d", i);
                break;

            case 2:
                printf("\n2. Calculate sum of the digits of a number");
                printf("\nEnter a num to sum:- ");
                scanf("%d", &num);
                copyNum = num;
                for(copyNum; copyNum>0; length++)
                    copyNum/=10;
                copyNum = num;
                for(int i = length; i>=1; i--){
                    temp = copyNum%10;
                    sum = sum + temp;
                    copyNum = copyNum/10;
                }

                printf("\n%d", sum);
                break;

            case 3:
                printf("\n3. Volume of a cuboid");
                printf("\nEnter L, B, H:- ");
                scanf("%d %d %d", &l, &b, &h);

                v=l*b*h;
                printf("\nVolume of a cuboid is %d", v);

            case 4:
                printf("\n4. Check whether a given number is Prime or not");
                printf("\nEnter a num to check prime or not:- ");
                scanf("%d", &numPrime);

                for(j=2; numPrime>j; j++){
                    if(numPrime%j == 0){
                        printf("\nNot Prime");
                        break;
                    } else {
                        printf("\nPrime");
                        break;
                    }
                }
                break;

            case 5:
                printf("\n5. Exit");
                flag = 0;




            }
    }
}
