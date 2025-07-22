 /*
 Assignment-15: Level up with loops
02 Write a program to print all Prime numbers between two given numbers
*/

#include<stdio.h>
#include<conio.h>

int main() {

int i=2, j, num=10;

printf("Enter two numbers:- ");
scanf("%d %d", &i, &num);

for (i; i<=num; i++) {
    int prime=1;
    for(j=2; j<i; j++) {
        if(i%j==0) {
            prime = 0;
        }
    }
    if(prime) {
        printf("%d ", i);
    }
}
getch();
return 0;
}
