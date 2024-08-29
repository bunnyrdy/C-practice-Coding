#include<stdio.h>
int main(){
int quntity;
int dis = 0;
float  rate = 100,total;
printf("enter the quantity of item you bought");
scanf("%d",&quntity);
if(quntity >= 1000){
   dis  = 10;

   total = quntity * rate - quntity * rate * dis /100;
   printf("total bill = %f",total);
}
}