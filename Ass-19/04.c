/*
Assignment-19: switch case control
04
Write a menu driven program with the following options:
    Check whether a given set of three numbers are lengths of an isosceles triangle or not (  if at least two of its sides have equal lengths )
    Check whether a given set of three numbers are lengths of sides of a right angled triangle or not ( square the lengths of the two shorter sides (a and b), add them together, and check if the result equals the square of the longest side (c) )
    Check whether a given set of three numbers are equilateral triangle or not ( a triangle that has all its sides equal in length )
    Exit
*/

#include<stdio.h>
#include<conio.h>

int  main() {

int triA=0, triB=0, triC=0, flag=1, opt=0;

while(flag) {
    printf("\n0. Exit:");
    printf("\n1. Check Triangle is isosceles:");
    printf("\n2. Check Triangle is right angled:");
    printf("\n3. Check Triangle is equilateral:");
    printf("\nEnter Option:- ");
    scanf("%d", &opt);

    switch(opt) {


        case 0:
                printf("Exit");
                flag = 0;
                break;

        case 1:
            printf("\n1. Check Triangle is isosceles:");
            printf("\nEnter Lengths of Triangle:- ");
            scanf("%d %d %d", &triA, &triB, &triC);

            if(triA==triB || triB==triC || triA==triC) {
                printf("\nTriangle is Isosceles Triangle");
            } else {
                 printf("\nTriangle is Not Isosceles Triangle");
            }
            break;


        case 3:
            printf("\n1. Check Triangle is equilateral:");
            printf("\nEnter Lengths of Triangle:- ");
            scanf("%d %d %d", &triA, &triB, &triC);

            if(triA==triB && triB==triC && triA==triC) {
                printf("\nTriangle is equilateral Triangle");
            } else {
                 printf("\nTriangle is Not equilateral Triangle");
            }
            break;

        default:
            printf("Enter Proper Intput like 0, 1 ...");


    }



}
return 0;
}
