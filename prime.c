#include<stdio.h>
int main(){
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    int i = 2;
    while(i <= num -1){
        if(num % i == 0){
            printf("the number u have entered is not a  prime number:%d",num);
            break;
        }
        i++;
    }
    if(i == num){
        printf("entered number is a prime number");
    }
}