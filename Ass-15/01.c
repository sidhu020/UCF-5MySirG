 /*
 Assignment-15: Level up with loops
01 Write a program to print all Prime numbers under 100
*/

#include<stdio.h>
#include<conio.h>

int main() {

int i, j, num=100;

for (i=2; i<=num; i++) {
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
