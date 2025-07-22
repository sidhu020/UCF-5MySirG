/*
Assignment-8: Decision Control Statements
04 Write a program to check whether a given year is a leap year or not.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int year;

printf("Enter a year:- ");
scanf("%d", &year);

if(year%4 == 0){
    if(year%100 == 0){
        if(year%400 ==0) {
            printf("Leep Year");
        }else{
            printf("Not A Leep Year");
        }
    }else{
        printf("Leep Year");
    }
}else{
    printf("Not A Leep Year");
}

getch();
return 0;
}
