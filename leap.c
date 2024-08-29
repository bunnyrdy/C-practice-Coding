#include<stdio.h>
int main(){
    int input ;
    printf("enter the year");
    scanf("%d",& input);
    if(input % 4 == 0)
      printf("year is leap year : %d",input);
      else{
         printf("year is  not leap year : %d",input);
      }
}