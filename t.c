#include<stdio.h>
 int main(){
    int number;
    int count = 0;
 printf("enter the number:");
scanf("%d",&number);
for (int  j = 2; j < number; j++)
{
    if (number%j == 0)
    {
      printf("\nthe number you have entered is not a prime number:%d",number);
      count++;
      break;
      
    } 
   
    
}   if (count == 0)
{
     printf("\nthe number you have entered is  a prime number:%d",number);
}


 }