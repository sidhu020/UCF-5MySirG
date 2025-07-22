/*
Assignment-18: More on Star Pattern Problems
06
A B C D C B A
  A B C B A
    A B A
      A
*/
	
#include <stdio.h>
int main() {
    int space, row=4, k='A';
    
    for(int i=row; i>=1; i--) {
        for(space=0, k='A'; space<row-i; space++) {
            printf("  ");
        }
        for(int j='A'; j<i+64; j++) {
			printf("%c ", j);
		}
		for(int k=i+'A'-1; k>='A'; k--){
			printf("%c ", k);
		}
        printf("\n");
    }
    return 0;
}