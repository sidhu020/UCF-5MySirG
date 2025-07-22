 /*
Assignment-17: Star Pattern Problems
06
1
21
321
4321
54321
*/
#include<stdio.h>
#include<conio.h>

int main() {
	
	
	for(int i=1; i<=5; i++) {
		for(int j=5; j>=1; j--) {
			if(j<=i){
				printf(" %d ", j);
			} else {
				//printf("   ");
			}
		}
		printf("\n");
	}	
	
	getch();
	return 0;
}