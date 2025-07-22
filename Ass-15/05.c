 /*
Assignment-15: Level up with loops
05 Write a program to check whether two given numbers are co-prime numbers or not
*/

#include<stdio.h>
#include<conio.h>

int main() {
	printf("\033[H\033[J");
	int num1=36, num2=48, low=num1<num2?num1:num2, i=low;

	printf("Enter Two Numbers:- ");
	scanf("%d %d", &num1, &num2);

	for(i; i>=1; i--) {
		//printf("i=%d\n", i);
		if(num2%i==0 && num1%i==0) {
			//	printf("HCF:- %d", i);
			break;
		}
	}
	
	if(i==1){
		printf("%d And %d are Co-prime", num1, num2);
	}else{
		printf("%d is HCF And %d And %d are not Co-prime", i, num1, num2);
	}
getch();
return 0;
}