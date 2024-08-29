#include<stdio.h>
int main(){
    int a = 3;
    int b = 9;
   a = a+b-(b=a);
    printf("%d %d",a,b);

}