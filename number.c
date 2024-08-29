#include<stdio.h>
int main(){
    int number;
    printf("enter the four digit number:");
    scanf("%d",&number);
    int digit;
    int sum = 0;
    int temp = number;
    int final_sum = 0;
    int digit2;
    while (temp !=0)
    {
        digit = temp % 10;
        sum += digit;
        temp = temp / 10;

    }
      if(sum >= 10){
        while( sum !=0){
            digit2 = sum % 10;
            final_sum += digit2;
            sum = sum /10;
        } 
        printf("the sum is %d",final_sum);
      } else{
        printf("the sum is %d", sum);
      }  
    
}