#include<stdio.h>
int main(){
    int input;
    float meter, foot, inch, centemeter;
    printf("enter the number of kms");
    scanf("%d",&input);
    meter = input * 1000;
    centemeter = input*100000;
    foot = input * 3280.84;
    inch = input * 39370;
    printf("meter = %f \n centemeter = %f \n foot = %f \n inch = %f" ,  meter, centemeter, foot,inch);

}