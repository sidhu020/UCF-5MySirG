/*
Assignment-40: Handling multiple strings
02. Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.
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

int vowelFind(int n, int l, char str[n][l]){
    int i=0, j=0, k=0, count=0;
    char vowel[]="AaEeIiOoUu";

    for(i=0; i<n; i++){
        j=0;
        while(str[i][j]){
            k=0;
            while(vowel[k]){
                if(str[i][j]==vowel[k])
                count++;
                k++;
            }
            j++;
        }
    }

    return count;
}
int main()
{
	char city[10][10];
	char citySorted[10][10];
    input(10, 10, city);
	printf("count:%d", vowelFind(10, 10, city));
	return 0;
}
