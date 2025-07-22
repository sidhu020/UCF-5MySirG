/*
Assignment-2: printf and scanf
01 Write a program to calculate average of three integers. Numbers are given by the user
*/

#include<stdio.h>

int main() {

int num1, num2, num3;
float avg;

printf("Entre Three NUmber :- ");
scanf("%d, %d, %d", &num1, &num2, &num3);

avg = (num1+num2+num3)/3;

printf("The Average of %d, %d And %d is %f", num1, num2, num3, avg);



getch();
return 0;
}
