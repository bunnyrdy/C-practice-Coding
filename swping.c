#include<stdio.h>
int main(){
    int input;
    int hun, fifties, tens;
    printf("enter the amount that yoiu want to withdraw");
    scanf("%d", &input);
    hun = input/100;
    fifties = (input%100)/50;
    tens = (input%100%50)/10;
    printf("hundreds notes you get:%d", hun);
    printf("\n");
    printf("fifty notes you get: %d", fifties);
     printf("\n");
    printf("ten notes you get:%d",tens);

}