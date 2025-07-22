/*
Assignment-01-Input and output in C Language
09- Write a program to calculate area of a rectangle. Input appropriate data from the user.
*/

#include<stdio.h>
#include<conio.h>

int main() {

    printf("calculate area of a rectangle\n");

    int length, width;

    printf("Enter Length:- ");
    scanf("%d", &length);

    printf("Enter width:- ");
    scanf("%d", &width);

    printf("The area of a rectangle is: %d", length*width);

return 0;
}

/*
Output:-
calculate area of a rectangle
Enter Length:- 10
Enter width:- 10
The area of a rectangle is: 100
*/
