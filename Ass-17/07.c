/*
Assignment-17: Star Pattern Problems
01 
ABCDE
 ABCD
  ABC
   AB
    A
*/
#include<stdio.h>
#include<conio.h>

int main() {
	
	
	for(int i=1; i<=5; i++) {
		for(int j=1; j<=5; j++) {
			int k;
			k=(j-i)+65;
			if(k>=65){
				printf(" %c ", k);
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}	
	
	getch();
	return 0;
}

