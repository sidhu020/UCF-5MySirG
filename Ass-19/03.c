/*
Assignment-19: switch case control
03 Write a program which takes the day number of a week and displays a unique greeting message for the day.
*/

#include<stdio.h>
int main() {

    int day=0, flag=1;
    while(flag) {
        printf("\nEnter Week Day Number:- ");
        scanf("%d", &day);
        switch(day) {
            case 0:
                printf("\n Exit ");
                flag=0;
                break;
            case 1:
                printf("\n Sunday ");
                printf("\n Happy Sunday, Rajkot! May your day be filled with positive energy.");
                break;
            case 2:
                printf("\n Monday");
                printf("\n Happy Monday, Rajkot! Embrace the new week with enthusiasm and optimism");
                break;
            case 3:
                printf("\n Tuesday ");
                printf("\nHappy Tuesday, Rajkot! May your day be as bright as the Gujarat sun.");
                break;
            case 4:
                printf("\n Wednesday ");
                printf("\n Happy Wednesday, Rajkot! May your day be filled with positive energy");
                break;
            case 5:
                printf("\n Thursday ");
                printf("\n Happy Thursday, Rajkot! May your day be filled with positive energy");
                break;
            case 6:
                printf("\n Friday ");
                printf("\n Happy Friday, Rajkot! May your day be filled with positive energy.");
                break;
            case 7:
                printf("\n Saturday ");
                printf("\n Happy Saturday, Rajkot! May your day be filled with positive energy.");
                break;
            default:
                printf("Enter 0 To 7 0 for exit");
        }
    }


return 0;
}
