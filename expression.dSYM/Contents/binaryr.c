// #include<stdio.h>
// void binarynumber(int number){
//    int  count = 1;
//    int binary = 0;
   
//    while (number!= 0)
//    {
//    int  reminder = number%2;
//     binary += reminder * count;
//     count = count * 10;
//     number = number / 2;
//    }
//    printf("%d",binary);
   

    
// }
// int main(){
//     int number = 100;
//     binarynumber(number);
    
// }
// // with recursion
#include<stdio.h>
void binary(int number,int count, int b_num){
    if (number  == 0)
    {
       printf("%d",b_num); ;
    } else{
     int reminder = number % 2;
     b_num += reminder * count;
     count  = count * 10;
     number = number / 2;
      return binary(number, count, b_num);
    }
    
    
}
int main(){
    int number = 100;
    int count  = 1;
    int b_number = 0;
   binary(number, count, b_number);
   
  
}