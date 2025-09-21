/*
Assignment-41 : Handling multiple strings
03. Write a function to check
    whether a pair of strings are anagram or not.
    Both the strings are stored in a 2d char array.
*/

#include<stdio.h>
#include<string.h>

void input(int n, int l, char str[n][l]){
    int i, j=0;
    for(i=0; i<n; i++){
        printf("Enter Name-%d:- ", i);
        fgets(str[i], l, stdin);
        fflush(stdin);
		while(str[i][j])
		    j++;
		str[i][j-1]='\0';
    }
}

void print(int n, int l, char str[n][l]){
    for(int i=0; i<n; i++){
        printf("%s\n", str[i]);
    }
}

void sortString(int n, int l, char str[n][l]){
    for(int k=0; k<n; k++){

        int l=0, i=0, j=0;
        for(l; str[k][l]; l++);

        for(i=0; i<l-1; i++){
            for(j=0; j<l-i-1; j++){
                if(str[k][j]>str[k][j+1]){
                    char temp = str[k][j];
                    str[k][j] = str[k][j+1];
                    str[k][j+1] = temp;
                }
            }
        }
    }
}

int checkAnagram(int n, int l, char str[n][l]){
    char temp[n][l];

    //copy to temp
    for(int i=0; i<n; i++)
        strcpy(temp[i], str[i]);

    sortString(n, l, temp);

    //check Anagram
    if(strcmp(temp[0], temp[1])==0)
        return 1;
    return 0;
}

int main(){
    int n=2, l=20;
    char str[n][l];
    input(n, l, str);
    print(n, l, str);
    printf("\n %d", checkAnagram(n, l, str));
return 0;
}
