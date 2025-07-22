/*
Assignment-01-Input and output in C Language
07- Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
*/

#include<stdio.h>
#include<conio.h>

int main() {

    printf("sum of two integers.\n");

    int num1, num2;

    printf("Enter Number-1:- ");
    scanf("%d", &num1);

    printf("Enter Number-2:- ");
    scanf("%d", &num2);

    printf("%d", num1+num2);

return 0;
}

/*
Output:-
sum of two integers.
Enter Number-1:- 10
Enter Number-2:- 100
110
*/
