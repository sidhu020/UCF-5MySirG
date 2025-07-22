/*
Assignment-18: More on Star Pattern Problems
05
A B C D E F G
  A B C D E
    A B C
      A
*/
	
#include <stdio.h>
int main() {
    int space, row=4, k='A';
    
    for(int i=row; i>=1; i--) {
        for(space=0, k='A'; space<row-i; space++) {
            printf("  ");
        }
        
        while(k!=(2*i-1)+'A') {
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}