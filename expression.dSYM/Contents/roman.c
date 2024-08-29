#include<stdio.h>
void roman(int number){
    while(number != 0){
    if (number >= 1000){
        printf("m");
        number = number - 1000;
    }
     else if(number >= 500){
        printf("d");
        number = number - 500;
    }
     else if(number >= 100){
        printf("c");
        number = number - 100;
    }
    else if(number >= 50){
        printf("l");
        number = number - 50;
    }
     else if(number >= 10){
        printf("x");
        number = number - 10;
    }
    else if(number >= 5){
        printf("v");
        number = number - 5;
    }
    else if(number >= 1){
        printf("i");
        number = number - 1;
    }
    }
    
}

int main(){
    int number;
    printf("enter the number :");
    scanf("%d",&number);
    roman(number);
}