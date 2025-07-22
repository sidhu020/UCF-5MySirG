/*
Assignment-18: More on Star Pattern Problems
09
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1
*/

#include <stdio.h>
int main() {
    int r=4;

    for(int i=1; i<=r; i++){
        int k=1;
        for(int j=1;j<=r*2-1; j++){
            if((j>=1&&(j<=r-i+1))||((j>=r+i-1)&&(j<=r*2-1))){
                printf("%d ", j<=(r-i)?k++:k--);
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
