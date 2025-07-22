/*
Assignment-16: Level up with loops
04 Write a program to check whether a given number is an Armstrong number or not
*/

#include<stdio.h>
#include<conio.h>

int main() {
	
	int num=153;
	printf("Enter A number:- ");
	scanf("%d", &num);
	
	int copynum1=num, length=0;
	while(copynum1) {
		copynum1/=10;
		length++;
	}
	int copynum2=num, sum=0;
	while(copynum2) {
		int digit = copynum2%10;
		int i=length, power=digit;
		while(i>1) {
			power*=digit;
			i--;
		}
		sum+=power;
		copynum2/=10;
	}
	
	if(sum==num)
		printf("%d is Armstrong number", sum);
	else
		printf("%d is not Armstrong number", num);
	getch();
	return 0;
}