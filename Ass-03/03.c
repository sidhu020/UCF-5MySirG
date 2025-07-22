/*
Assignment-3: printf and scanf
03 Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
*/
#include<stdio.h>
#include<conio.h>

int main() {

char ch1, ch2, ch3;

printf("Enter 3 charter:- ");
scanf("%c %c %c", &ch1, &ch2, &ch3);

printf("\n%c-%d", ch1, ch1);
printf("\n%c-%d", ch2, ch2);
printf("\n%c-%d", ch3, ch3);

getch();
return 0;
}
