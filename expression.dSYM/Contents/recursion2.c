#include<stdio.h>
int sumofdigit(int number){
    if (number == 0)
    {
        return 0;
    } else {
       int  digit = number % 10;
           return digit+sumofdigit(number/10) ;
    }
    
}
int main(){
    int number = 23456;
    int sum;
    sum = sumofdigit(number);
    printf("%d", sum);
    

}