/*
Assignment-10: More on Decision Control Statements
04 Write a program which takes the month number as an input and display number of days in that month.
*/


#include<stdio.h>
#include<conio.h>

int main() {

int num = 5;

if(num==1)
    printf("January");
else if(num==2)
    printf("February");
else if(num==3)
    printf("March");
else if(num==4)
    printf("April");
else if(num==5)
    printf("May");
else if(num==6)
    printf("June");
else if(num==7)
    printf("July");
else if(num==8)
    printf("August");
else if(num==9)
    printf("September");
else if(num==10)
    printf("October");
else if(num==11)
    printf("November");
else if(num==12)
    printf("December");
else
    printf("not 1 to 12");



getch();
return 0;
}
