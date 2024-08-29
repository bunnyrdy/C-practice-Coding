#include<stdio.h>
#include<stdlib.h>
int main( )
{
int choice ;
while ( 1 )
{
printf ( "\n1. Factorial" ) ;
printf ( "\n2. Prime" ) ;
printf ( "\n3. Odd/Even" ) ;
printf ( "\n4. Exit" ) ;
printf ( "\nYour choice? " ) ;
scanf ( "%d", &choice ) ;
switch ( choice )
{
    
    
    
    

case 1 :{
int number;
printf("enter the number:");
scanf("%d",&number);
int fact = 1;
for ( int i = 1; i <= number; i++)
{
    fact = fact*i;
}
 printf("\nthe factoril of the number is:%d",fact);

break ;
}
case 2 :{
    int num;
int count = 0;
printf("enter the number for finding prime number:");
scanf("%d",&num);
for (int  j = 2; j < num; j++)
{
    if (num%j == 0)
    { 
     count++;
      break;
    }    
}
  if (count == 0)
  {
    printf("\nthe number you have entered is  a prime number:%d",num);
  } else{
    printf("\nthe number you have entered is not a prime number:%d",num);  
  }
  
break ;
}
case 3 :{
int input;
    
    printf("enter the number:");
    scanf("%d", &input);   
    if (input % 2 == 0)
    {
        printf("the entered number is a even number:%d",input);
    } else{
        printf("the entered number is not a even number:%d",input);
    }
    break;
}
case 4 :
exit(4) ;
}
}
}