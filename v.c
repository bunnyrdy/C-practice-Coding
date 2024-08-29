#include<stdio.h>
int main(){
    int number = 7;
  float  result = 0;
  for(int i = 1 ; i <= number; i++){
     float fact = 1;
     for (int j = 1; j <=i; j++)
     {
        fact = fact*j;
     }
       fact = i/fact;
      result += fact;
     
  }
  printf("%f",result);

}