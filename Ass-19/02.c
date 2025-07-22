/*
Assignment-19: switch case control
02 Write a menu driven program with the following options:
    Addition
    Subtraction
    Multiplication
    Division
    Exit
*/

#include<stdio.h>
#include<conio.h>

int main() {
    int num1=0, num2=0,  action=0, flag=1;

    while(flag) {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter Value:- ");
        scanf("%d", &action);

        switch(action) {
        case 1:
            printf("\nAddition\n");
            printf("\nEnter Two Digit:- ");
            scanf("%d %d", &num1, &num2);
            printf("\n%d + %d = %d", num1, num2, num1+num2);
            break;
        case 2:
            printf("\nSubtraction\n");
            printf("\nEnter Two Digit:- ");
            scanf("%d %d", &num1, &num2);
            printf("\n%d - %d = %d", num1, num2, num1-num2);
            break;
        case 3:
            printf("\nMultiplication\n");
            printf("\nEnter Two Digit:- ");
            scanf("%d %d", &num1, &num2);
            printf("\n%d * %d = %d", num1, num2, num1*num2);
            break;
        case 4:
            printf("\nDivision\n");
            printf("\nEnter Two Digit:- ");
            scanf("%d %d", &num1, &num2);
            printf("\n%d / %d = %d", num1, num2, num1/num2);
            break;
        case 5:
            printf("\nExit");
            flag=0;
            break;
        default:
            printf("\nenter 1 to 5");

        }
    }

return 0;
}
