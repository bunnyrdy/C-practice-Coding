#include<stdio.h>
int fib(int number, int a , int b, int count){
    
    if (count > number)
    {
        return 0;
    } else{
        int c = a + b;
        a = b;
        b = c;
        printf("%d", c);
        printf(" ");
        return fib(number,a, b,count + 1);
    }
    
} int main(){
    int number = 25;
    int a = 0;
    int b = 1;
    fib(number, a, b,1);
}