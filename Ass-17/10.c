/*
Assignment-17: Star Pattern Problems
*****
*   *
*   *
*   *
*****
*/

#include<stdio.h>
#include<conio.h>

int main() {
	
	int n=5;
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(i==1 || j==1 || i==n || j==n)
			{
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