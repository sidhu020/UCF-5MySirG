/*
Assignment-9: Decision Control Statements
01 Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
*/

#include<stdio.h>
#include<conio.h>

int main() {

float cp, sp, diff, percentage;

printf("Enter Cost, Sell price:- ");
scanf("%f %f", &cp, &sp);

diff=cp-sp;

percentage=(diff*100)/cp;

printf("The %s Is %0.2f", (percentage<0?"Profit":"loss"), percentage);

getch();
return 0;
}
