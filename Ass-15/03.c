 /*
 Assignment-15: Level up with loops
03 Write a program to find next Prime number of a given number
*/

#include<stdio.h>
#include<conio.h>

int main() {

int i, j=2;

printf("Enter Number:- ");
scanf("%d", &i);

while(i) {
    int flag=1;
    while(j<=i) {
        if(i%j == 0) {
            printf("%d %d %d\n", i, flag, j );;
            flag=0;
        }
    j++;
    }
    if(flag){
        printf("%d", i);
        break;
    }
    i++;
}


getch();
return 0;
}
