/*
Assignment-5: More on Operators in C Language
03 Write a program to print size of an int, a float, a char and a double type variable
*/
#include<stdio.h>
#include<conio.h>

int main() {

int a;
float b;
char c;
double d;

printf("int-%d, float-%d, char%d, double-%d", sizeof(a), sizeof(b), sizeof(c), sizeof(d));


getch();
return 0;
}
