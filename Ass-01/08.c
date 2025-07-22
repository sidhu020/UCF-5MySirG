/*
Assignment-01-Input and output in C Language
08- Write a program to calculate square of a given number. Number is entered by the user.
*/

#include<stdio.h>
#include<conio.h>

int main() {

    printf("calculate square\n");

    int num1;

    printf("Enter Number For Square:- ");
    scanf("%d", &num1);
    printf("%d", num1*num1);

return 0;
}

/*
Output:-
calculate square
Enter Number For Square:- 10
100
*/
