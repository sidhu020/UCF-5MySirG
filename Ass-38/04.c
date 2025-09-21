/*
Assignment-38: Strings and Functions
04. Write a function to reverse a string word wise.
    (For example if the given string is "Mysirg Education Services" then
     the resulting string should be "Services Education Mysirg" )
*/

#include<stdio.h>

int input(char str[], int l){
    fgets(str, l, stdin);
    fflush(stdin);
    int i=0;
    while(str[i])
        i++;
    str[i-1]=' ';

    return i-1;
}

void reverse(char str[], char str2[], int len){

    void strConcat(char strNew[], char strOld[], int start, int end){
        int i=start;
        while(i<=end&&strOld[i]){
            strNew[i]=strOld[i];
            i++;
        }
    }

    int i=len-1, isChar=0, isNotchar=0, start=0, end=0;

    while(str[i]){

        if((str[i]>=33)&&(str[i]<=126)){
            if(!isChar)
                end=i;
            isChar=1;
        }else{
        isNotchar=1;
        }

        if(isNotchar&&isChar){
            start=i;
            strConcat(str2, str, start, end);
        isChar=0;
        isNotchar=0;
        }
        i--;
    }

}
int main(){
    char name[50];
    char str2[50];
    int length = input(name, 50);
    reverse(name, str2, length);

    printf("%s", str2);


return 0;
}
