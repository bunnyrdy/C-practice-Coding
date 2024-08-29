#include<stdio.h>
int main (){
    int input;
    printf("enter the three digit number");
    scanf("%d", &input);
    int digit  = input % 10;
    digit = digit+1;
    input  = input / 10;
    int digit1  = input % 10;
    digit1 = digit1+1;
    input  = input / 10;
    int digit2  = input % 10;
    digit2 = digit2+1;
    input  = input / 10;
    printf("%d %d %d",digit2,digit1,digit);

    

}