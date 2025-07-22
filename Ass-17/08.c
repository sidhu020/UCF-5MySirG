/*
Assignment-17: Star Pattern Problems
08
1
23
456
78910
*/

#include<stdio.h>
#include<conio.h>

int main() {

int k=1;
	for(int i=1; i<=5; i++) {
		for(int j=1; j<=i; j++) {
			printf(" %d ", k);
			k++;
		}
		printf("\n");
	}

getch();
return 0;
}