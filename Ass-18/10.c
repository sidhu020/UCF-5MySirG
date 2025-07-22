/*
Assignment-18: More on Star Pattern Problems
09
A B C D C B A
A B C   C B A
A B       B A
A           A
*/

#include <stdio.h>
int main() {
    int r=4;

    for(int i=1; i<=r; i++){
        int k=65;
        for(int j=1;j<=r*2-1; j++){
            if((j>=1&&(j<=r-i+1))||((j>=r+i-1)&&(j<=r*2-1))){
                printf("%c ", j<=(r-i)?k++:k--);
            } else {
            printf("  ");
            if(j==4){
                k++;
            }
            }
        }
        printf("\n");
    }
    return 0;
}
