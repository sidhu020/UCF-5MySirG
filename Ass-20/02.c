/*
Assignment-20: switch case control
02
Write a menu driven program with the following options:
    Factorial of a number
    Check Even and Odd
    Area of circle
    Sum of first N natural numbers
    Exit
*/
#include<stdio.h>

int main() {
    int choice=0, flag=1, num=0, ans=0;

    while(flag) {
        printf("\n1. Factorial of a number");
        printf("\n2. Check Even and Odd");
        printf("\n3. Area of circle");
        printf("\n4. Sum of first N natural numbers");
        printf("\n5. Exit");
        printf("\n");

        printf("\nEnter Choice:- ");
        scanf("%d", &choice);

        switch(choice) {
        case 1:
            ans=1;
            printf("\n1. Factorial of a number");
            printf("\n Enter number to find Factorial:- ");
            scanf("%d", &num);

            for(int i=1; i<=num; i++) {
                ans=ans*i;
            }

            printf("Factorial of %d is %d! = %d",num, num, ans);
            break;

        case 2:
            printf("\n2. Check Even and Odd");
            printf("\n Enter number to Check Even and Odd:- ");
            scanf("%d", &num);

            if(num%2==0)
                printf("%d is Even", num);
            else
                printf("%d is Odd", num);

            break;

        case 3:
            printf("\n3. Area of circle");
            printf("\n Enter Radius  to find Area of circle:- ");
            scanf("%d", &num);
            ans = 3.14*num*num;
            printf(" The Area of Circle is %d", ans);
            break;

        case 4:
            ans=0;
            printf("\n4. Sum of first N natural numbers");
            printf("\n Enter Number  to find Sum of numbers:- ");
            scanf("%d", &num);

            for(int i=1; i<=num; i++) {
                ans=ans+i;
            }
            printf("Sum of %d is %d",num, ans);
            break;
        case 5:
            flag=0;
            break;
        default:
            printf("Choise proper option");
            break;


        }
    }
return 0;
}
