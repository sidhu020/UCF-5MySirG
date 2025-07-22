/*
Assignment-18: More on Star Pattern Problems
03
    * 
   * * 
  * * * 
 * * * * 
*/
	
#include <stdio.h>
int main() {
        int row=4, space=0, k=0;
    for(int i=1; i<=row; i++) {
        for(space=0,k=0; space<=row-i; space++){
            printf(" ");
        }
        
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}