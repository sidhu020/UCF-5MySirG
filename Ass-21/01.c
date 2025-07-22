/*
Assignment-21: Functions
01 Write a function to calculate the area of a circle. (TSRS)
*/

#include<stdio.h>
#include<conio.h>
int main() {

    float areaOfCircle(float re) {
        float area;
        area = 3.14*re*re;
        return area;
    }
    float area;
    area = areaOfCircle(5);
    printf("%f", area);

return 0;
}
