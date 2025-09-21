/*
Assignment-40: Handling multiple strings
03. Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.
*/

#include <stdio.h>

void input(int n, int l, char str[n][l]){
    int i, j;
    for(i=0; i<n; i++){
        printf("Enter Name-%d:- ", i);
        fgets(str[i], l, stdin);
        for(j=0; str[i][j]; j++);
		str[i][j-1]='\0';//str[i][j]
    }
}

void print(int n, int l, char str[n][l]){
    int i=0;
    while(i<n){
        printf("%s\n", str[i]);
        i++;
    }
}

void sortWords(int n, int l, char str[n][l]){
    int i=0, j=0;

    for(j=0; j<n; j++){
        printf("for loop:1, j=%d, n=%d\n", j, n);
        for(i=0; i<n-j; i++){
            printf("for loop:2, i=%d, l=%d, j=%d, l-j=%d\n", i, l, j, l-j);
            if(str[i][0]>str[i+1][0]){
                printf("if, swapping str[i]=%s, str[i+1]=%s\n", str[i], str[i+1]);
                char tempStr[10];
                strcpy(tempStr, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], tempStr);
            }
        }
    }

}

int main()
{
    int n=5, l=5;
	char city[n][l];
    input(n, l, city);
    print(n, l, city);
    printf("\n");
    //sortWords(n, l, city);
    //print(n, l, city);

	return 0;
}
