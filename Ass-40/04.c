/*
Assignment-40: Handling multiple strings
04. Write a function to store each word a string
    in a 2 dimensional char array.


*/

#include <stdio.h>

void strTo2darr(int n, int l, char str2d[n][l], char str[]){
    int i=0, x=0, y=0;

    while(str[i]){
        if(str[i]>=33 && str[i]<=126){
            str2d[x][y]=str[i];
            y++;
        }else{
            str2d[x][y]='\0';
            x++;
            y=0;
        }
        i++;
    }
    str2d[x][y]='\0';
}

int main()
{
    int n, l;
    n=5, l=5;
    char string[]="i am a boy call sidd.";
    char str2d1[n][l];
    strTo2darr(n, l, str2d1, string);

    for(int i=0; i<=n; i++)
        printf("%s\n", str2d1[i]);



    return 0;
}
