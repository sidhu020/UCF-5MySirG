 /*
 Assignment-14: Use any loop
04 Write a program to calculate LCM of two numbers
*/

#include<stdio.h>
#include<conio.h>

int main() {

int a=20, b=80, lcm=0, i=0;

for(i=(a>b?a:b); i<=a*b; i++) {
    if(i%a==0 && i%b==0) {
        break;
    }
}

printf("%d", i);

getch();
return 0;
}
