#include<stdio.h>
int power(int pow, int number){
    int result;
    while (pow != 0)
    {
        result *= number;
        pow--;
    }
     return result;
    
}
int main(){
    int pow;
    int number;
    int result;
    printf("enter the number and enter the power of that number:");
    scanf("%d %d", &number,&pow);
    result = power(pow, number);
    printf("the power of the given number is :%d",result);
}