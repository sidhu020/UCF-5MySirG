/*
Assignment-18: More on Star Pattern Problems
01
    *
  * * *
* * * * *
*/

#include <stdio.h>
int main() {
    int r=4;

    for(int i=1; i<=r; i++) {
        for(int j=1; j<=r*2-1; j++) {
            if(j>=r-i+1&&j<=r+i-1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
