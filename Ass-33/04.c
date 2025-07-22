/*
Assignment-33: Multi Dimensional Arrays

04. Four players are playing a tournament of Chess with round robin method
    (each player will play with every other player).
    Each win has 2 points, draw has 1 point and loose has 0 points.

    Declare a score_board two dimensional array to store the scores of the players agains each player.

05. For que-4, define a function to update score_board after each match result.
06. For que-4, define a function to display score_board.
07. For que-4, define a function which returns the score of a specific player
08. For que-4, define a function to find the winner of the tournament.
09. For que-4, define a function to display rank of the players.
10. For que-4, define a function to run tournament,
    in which user has to enter result of each game and update score board
    using score_board function.
*/

#include<stdio.h>
#include<conio.h>
void update(int *a);

int main() {
    int num_player=4;
    int score_board[4][4]=
        {
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        };

    update(&score_board[0][0]);
    printf("%d", score_board[0][0]);

    return 0;
}
void update(int *a){
    int score=0;
    printf("Enter Point(Win=2, Draw=1, Lose=0)");
    scanf("%d", &score);

    *a=score;
}


