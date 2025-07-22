/*
Assignment-8: Decision Control Statements
05 Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int num1, num2, num3;

printf("Enter a num:- ");
scanf("%d", &num1);

printf("Enter a num:- ");
scanf("%d", &num2);

printf("Enter a num:- ");
scanf("%d", &num3);

    if(num1>num2){
        if(num3>num1)
            printf("Num3- %d is Big", num3);
        else
            printf("Num1- %d is Big", num1);
    }else if(num2>num3) {
        if(num1>num2)
            printf("Num1- %d is Big", num1);
        else
            printf("Num2- %d is Big", num2);
    }else{
        printf("%d", num3);
    }

getch();
return 0;
}
