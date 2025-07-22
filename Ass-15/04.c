 /*
 Assignment-15: Level up with loops
04 Write a program to calculate HCF of two numbers
*/

#include<stdio.h>
#include<conio.h>

int main() {
printf("\033[H\033[J");
int num1=36, num2=48, low=num1<num2?num1:num2;

printf("Enter Two Numbers:- ");
scanf("%d %d", &num1, &num2);

for(int i=low; i>=1; i--) {
    //printf("i=%d\n", i);
    if(num2%i==0 && num1%i==0) {
        printf("HCF:- %d", i);
        break;
    }
}

getch();
return 0;
}
