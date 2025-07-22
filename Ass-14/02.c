/*
Assignment-14: Use any loop
02 Write a program to count digits in a given number
*/

#include<stdio.h>
#include<conio.h>

int main() {

int num=9874566, count=0;

while(num) {

    num=num/10;
    count++;
}

printf("%d", count);

getch();
return 0;
}
