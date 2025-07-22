/*
Assignment-19: switch case control
01 Write a program which takes the month number as an input and display number of days in that month.
*/

#include<stdio.h>
#include<conio.h>

int main() {
    int monthNum=0;
    printf("Enter Month Number:-");
    scanf("%d", &monthNum);

    switch(monthNum) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days in a month");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days in a month");
            break;
        case 2:
            printf("28/29 Days in a month");
            break;
        default:
            printf("Enter 1 to 12");
            break;

    }


return 0;
}
