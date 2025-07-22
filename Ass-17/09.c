	/*
Assignment-17: Star Pattern Problems
01 
ABCDE
 BCDE
  CDE
   DE
    E
*/
#include<stdio.h>
#include<conio.h>

int main() {
	
	
	for(int i=65; i<=70; i++) {
		for(int j=65; j<=70; j++) {
			if(i<=j){	
				printf(" %c ", j);
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}	
	
	getch();
	return 0;
}

