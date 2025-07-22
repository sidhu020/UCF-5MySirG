 /*
 Assignment-14: Use any loop
05 Write a program to reverse a given number
*/

#include<stdio.h>
#include<conio.h>

int main() {

int num=564, rnum=0;

while(num) {

    rnum = rnum*10+(num%10);
    num = num/10;

    //printf("%d", num);
}

printf("%d", rnum);

getch();
return 0;
}
