/*
Assignment-34: String Basics
04. Write a program to count spaces in a given string.
*/

#include<stdio.h>
int main(){
int i=0, j=0, count=0;


char str[50];
fgets(str, 50, stdin);
fflush(stdin);
for(i=0; str[i]; i++);
str[i-1]=str[i];

char vowels[]={' ', '\0'};

for(i=0; str[i]; i++){
    for(j=0; vowels[j]; j++){
        if(str[i]==vowels[j])
            count++;
    }
}
printf("\n");
printf("%d spaces in %s", count, str);

return 0;
}
