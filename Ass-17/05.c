/*
Assignment-17: Star Pattern Problems
05 
1
12
123
1234
12345
*/
#include<stdio.h>
#include<conio.h>

int main() {
	
	
	for(int i=1; i<=5; i++) {
		for(int j=1; j<=5; j++) {
			if(j<=i){
				printf(" %d ", j);
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}	
	
	getch();
	return 0;
}