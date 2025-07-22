/*
Assignment-19: switch case control
05
Convert the following if-else-if construct into switch case:
if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
Else
printf("invalid");
*/
#include<stdio.h>
int main() {

    int num=0;
    printf("Enter Num:- ");
    scanf("%d", &num);

    switch(num) {

    case 1:
        printf("good");
        break;

    case 2:
        printf("better");
        break;

    case 3:
        printf("best");
        break;
    default:
        printf("invalid");

    }

return 0;
}
