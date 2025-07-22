/*
Assignment-14: Use any loop
03 Write a program to check whether a given number is a Prime number or not
*/

#include<stdio.h>
#include<conio.h>

int main() {

int i=2, j=1;

printf("Enter A num to cheack prime or not:- ");
scanf("%d", &j);

while(i<j) {
    if(j%i == 0) {
        printf("Not Prime: %d is DIvisible by %d",j, i);
        break;
    }
    if(i+1 == j) {
        printf("%d is Prime",j);
    }


    i++;
}
getch();
return 0;
}
