#include<stdio.h>
int main(){
    int number = 29;
    int result =1;
    for (int i = 1; i < 11; i++)
    {
        result = number * i;
        printf("%d*%d=%d\n",number,i,result);
    }
    
}