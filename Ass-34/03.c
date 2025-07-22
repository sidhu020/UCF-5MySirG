/*
Assignment-34: String Basics
03. Write a program to count vowels in a given string
*/

#include<stdio.h>
int main(){
int i=0, j=0, count=0;

char str[50];
fgets(str, 50, stdin);
fflush(stdin);
for(i=0; str[i]; i++);
str[i-1]=str[i];

char vowels[]={'A','a','E','e','I','i','O','o','U','u', '\0'};
printf("%d\n", vowels[10]);

for(i=0; str[i]; i++){
    for(j=0; vowels[j]; j++){
        if(str[i]==vowels[j]){
            printf("%c %c\n", str[i], vowels[j]);
            count++;
        }
    }
}
printf("\n");
printf("%d vowels in %s", count, str);

return 0;
}
