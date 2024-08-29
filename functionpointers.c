#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int(*ptr)(int,int) = add;
    // ptr = add;
    int result  = ptr(10,20);
    printf("%d",result);
    
}