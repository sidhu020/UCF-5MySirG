/*
Assignment-18: More on Star Pattern Problems
04
      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 
*/
	
#include <stdio.h>
int main() {
	int r=4;
	   for(int i=1; i<=r; i++) {
		   
		   for(int space=1; space<=r-i; space++){
			   printf("  ");
		   }
		   for(int j=1; j<i; j++) {
			   printf("%d ", j);
		   }
		   for(int k=i; k>=1; k--){
			   printf("%d ", k);
		   }
		   printf("\n");
	   }
    return 0;
}