/*
Assignment-2: printf and scanf
02 Write a program to calculate circumference of a circle(c=2*PI*r)
*/

#include<stdio.h>

int main() {

int r;
float c;

printf("Enter Radius of a circle:-");
scanf("%d", &r);

c=2*3.14*r;

printf("Circumference of circle is:- %f", c);

getch();
return 0;
}
