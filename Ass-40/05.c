/*
Assignment-40: Handling multiple strings
05. Write a function to remove duplicate names stored in the list of names
    stored in a 2d char array.
*/
#include<stdio.h>
#include<string.h>

void input(int n, int l, char str[n][l]){
    int i, j=0;

    for(i=0; i<n; i++){
        printf("Enter Name-%d:- ", i+1);
        fgets(str[i], l, stdin);
        fflush(stdin);
		while(str[i][j])
		    j++;
		str[i][j-1]='\0';
		str[i][j]='\0';
    }
}

void print(int n, int l, char str[n][l]){
    int i=0;
    while(i<n){
        printf("%s\n", str[i]);
        i++;
    }
}

void print1(int n, int l, char str[n][l]){
    int i=0, j=0;

    while(i<n){
            j=0;
        while(str[i][j]){
            printf("%c(%d), ", str[i][j], str[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}


int main(){
    int i=5, j=5;
    char names[i][j];
    input(i, j, names);
    print1(i, j, names);
return 0;
}
