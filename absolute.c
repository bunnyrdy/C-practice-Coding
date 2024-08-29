#include<stdio.h>
int main(){
    int number;
    int absolute_number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number < 0){
    absolute_number = number - (2* number);
    printf("the absolute  value is %d",absolute_number);
    }
     else {
     printf("the abolute value is %d",number);
     }  
      
}