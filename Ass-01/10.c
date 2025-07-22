/*
Assignment-01-Input and output in C Language
10- WAP to find the area of the circle. Take radius of circle from user as input.
*/

#include<stdio.h>
#include<conio.h>

int main() {

    printf("calculate area of the circle\n");

    int radius;

    printf("Enter Radius:- ");
    scanf("%d", &radius);
    printf("The area of the circle is: %f", radius*radius*3.14);

return 0;
}

/*
Output:-
calculate area of the circle
Enter Radius:- 5
The area of the circle is: 78.500000
*/
