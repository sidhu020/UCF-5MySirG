/*
Assignment-43: Pointers
05. There are five classes with different number of students in them.
    Five arrays containing marks of students of each class.
    Write a function to receive an address of an array of pointers to access marks of all the students.
    The job of function is to find the highest marks among all the classes.
*/

#include <stdio.h>

int findFirest(int **, int n);

int main() {
    // Write C code here
    int a[5]={91, 82, 73, 64, 0};
    int b[5]={65, 56, 47, 58, 0};
    int c[5]={71, 82, 93, 84, 0};
    int d[5]={45, 56, 67, 96, 0};
    int e[5]={99, 42, 53, 95, 0};

    int *ptr[5];//={a, b, c, d, e};

    ptr[0]=a;
    ptr[1]=b;
    ptr[2]=c;
    ptr[3]=d;
    ptr[4]=e;

    printf("\n %d", findFirest(ptr, 5));
    return 0;
}

int findFirest(int **ptr, int n){
    int heigest=0;
    for(int i=0; i<=n; i++){
        for(int j=0; j<n; j++){

            if((*(ptr[i]+j))>heigest){
                //printf("%d, ", *(ptr[i]+j));
                heigest=*(ptr[i]+j);
            }
        }
        //printf("\n");
    }
    printf("\n %d", heigest);

    return heigest;
}
