/*
Assignment-17: Star Pattern Problems
04 
*****
 ****
 ***
  **
   *
*/
#include<stdio.h>
#include<conio.h>

int main() {
	
	
	for(int i=1; i<=5; i++) {
		for(int j=1; j<=5; j++) {
			if(i<=j){
				printf(" * ");
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}	
	
	getch();
	return 0;
}