// Write a program for a matchstick game being played between
// the computer and a user. Your program should ensure that the
// computer always wins. Rules for the game are as follows:
// − There are 21 matchsticks.
// − The computer asks the player to pick 1, 2, 3, or 4
// matchsticks.
// − After the person picks, the computer does its
// picking.
// − Whoever is forced to pick up the last matchstick
#include<stdio.h>
int main(){
    int user_pick;
    int computer_pick;
    int total_matchsticks = 21;
    printf("Welcome to the matchstick game! There are 21 matchsticks.\n");
    printf("You can pick 1, 2, 3, or 4 matchsticks");
    while(total_matchsticks > 0){
        printf("\nEnter the number of matchsticks you want to pick: ");
        scanf("%d", &user_pick);
        if(user_pick < 1 || user_pick > 4){
            printf("Invalid input. Please enter a number between 1 and 4.\n");
            continue;
            }
            total_matchsticks -= user_pick;
            printf("You picked %d matchsticks. Remaining matchsticks: %d\n", user_pick);
            if(total_matchsticks <= 0){
                printf("You lost! The computer wins!\n");
                break;
                }
                computer_pick = 5 - user_pick;
                total_matchsticks -= computer_pick;
                printf("Computer picked %d matchsticks. Remaining matchsticks: %d\n", computer_pick
                , total_matchsticks);
                if(total_matchsticks <= 0){
                    printf("Computer lost! You win!\n");
                    break;
                    }
                    }
                    return 0;
                    }
                    