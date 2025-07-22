/*
Assignment-9: Decision Control Statements
02 Write a program to take marks of 5 subjects from the user.
Assume marks are given out of 100 and passing marks is 33.
Now display whether the candidate passed the examination or failed.
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a, b, c, d, e;
float result;

printf("Enter 5 subject marks:- ");
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

result=(a+b+c+d+e)/5.0;

if(result>=33) {
    printf("The Student  Got %0.2f", result);
}else{
    printf("The studen Faild");
}
getch();
return 0;
}
