/*
Assignment-38: Strings and Functions
02. Write a function to trim a string (removing leading spaces from both the ends).
*/

#include<stdio.h>

void input(char str[], int l){
    fgets(str, l, stdin);
    fflush(stdin);
    printf("input fun.: %s:str\n", str);
    int i=0;
    while(str[i])
        i++;
    str[i-1]=str[i];
    printf("input fun.: %s:str\n", str);
    printf("Input fun.: %d:i\n", i);
}

int length(char str[]){
    int i=0;
    while(str[i])
        i++;
    printf("length fun.:%d:length of str\n", i);
    return i;
}


void shiftLeft(char str[], int j){
    printf("shiftLeft fun. \n");
    int i=j, l=length(str);
    printf("%d:i, %d:j, %d:l\n", i, j, l);
    while((i<l)&&(str[i])){
        printf("shiftLeft wile loop %d:i, %c:char\n", i, str[i]);
        str[i]=str[i+1];
        i++;
    }
}

void  trim(char str[]){
    int i=0;
    while(str[i]){
        printf("trim fun. while loop1 %d:i, %c:char\n", i, str[i]);
       if(!(str[i]>=33&&str[i]<=126)){
            printf("if block %d:i, %c:char\n", i, str[i]);
        shiftLeft(str, i);
       }
    i++;
    }
}

int main(){
    char name[50];
    input(name, 50);
    trim(name);
    printf("%s:str , %d:lengtr\n", name, length(name));

return 0;
}
