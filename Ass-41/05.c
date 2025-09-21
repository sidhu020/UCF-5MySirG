/*
Assignment-41 : Handling multiple strings
05. A 2d array is full with 10 email ids.
    Write a function to find how many of them belongs
    to gmail.com
*/
#include<stdio.h>
#include<string.h>


void printArr(int n, int l, char str[n][l]){
    for(int i=0; i<n; i++)
        printf("%d: %s\n", i, str[i]);
}

void input(int n, int l, char str[n][l]){
    int i, j;
    for(i=0; i<n; i++){
        printf("Enter Name-%d:- ", i);
        fgets(str[i], l, stdin);
        fflush(stdin);
        for(j=0; str[i][j]; j++);
		str[i][j-1]='\0';//str[i][j]
    }
}

int fingGmail(int n, int l, char str[n][l]){
    int no=n;
    while(no){
        int length=0;
        for(length; str[n-no][length]; length++);
        char gmail[]="gmail.com";
        int point=length-9, count=0;
        printf("\nlength of %s is %d; point is on:%d; %s", str[n-no], length, point, gmail);

        for(int i=0; i<9; i++){
            if(str[n-no][point+i]==gmail[i]){
                printf("\nif; %d %c=%c, ", i, str[n-no][point+i], gmail[i]);
                count++;
            }
        }
        if(count==9)
            return 1;
        else
            return 0;
        no--;
    }
}

int main(){
    int n=2, l=20;
    char arr[n][l];
    input(n, l, arr);
    fingGmail(n, l, arr);
    printArr(n, l, arr);

return 0;
}
