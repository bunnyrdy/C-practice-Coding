#include<stdio.h>
void fibnum(int a, int b, int number){
    int c;
    for (int i = 1; i <= number; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d", c);
         printf(" ");
        
    }
    

}
int main(){
    int a = 0;
    int b = 1;
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if (number < 2 && number == 1)
    {
       printf("%d",b);
    } else{
        fibnum(a,b,number);
    }
    

}