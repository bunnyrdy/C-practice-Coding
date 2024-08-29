#include<stdio.h>
int divisor(int num1, int num2){
    while (num2 < num1)
    {
        int d = num1 / num2;
        int temp = num1 - d * num2;
        num1 = num2;
        num2 = temp;
        
        
    }
     return num2;
    
}
int main(){
    int num1 = 24;
    int num2 = 18;
    int result1 = divisor(num1, num2);
    printf("%d", result1);
}