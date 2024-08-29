#include<stdio.h>
int main(){
    int p, t;
    float r, si;
    printf("Enter the principal amount: ");
    scanf("%d %d %f", &p , &t, &r);
    si = (p*t*r)/100;
    printf("the simple intrest = %f",si);
}