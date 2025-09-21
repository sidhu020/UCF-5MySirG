/*
Assignment-40: Handling multiple strings
01. Write a function to store strings, taken from user, to the given 2d char array.
*/

#include <stdio.h>

void input(int n, int l, char str[n][l]){
    int i, j=0;

    for(i=0; i<n; i++){
        printf("Enter Name-%d:- ", i);
        fgets(str[i], l, stdin);
        fflush(stdin);
		while(str[i][j])
		    j++;
		str[i][j-1]=str[i][j];
    }
}

int main()
{
	char city[10][10];
    input(10, 10, city);
    return 0;
}
