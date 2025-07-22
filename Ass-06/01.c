/*
Assignment-6: More on Operators in C Language
01 Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
*/

#include<stdio.h>
#include<conio.h>

int main() {

float INR, USD=84.23, result;

printf("Enter INR:- ");
scanf("%f", &INR);

result = INR/USD;

printf("USD= %0.3f", result);

return 0;
}
