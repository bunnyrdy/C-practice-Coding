
#include<stdio.h>
#include<math.h>
float area(int a , int b, int c){
    float s = (a+b+c)/2;
    printf("%f\n",s);
    float alg = (s*(s-a)*(s-b)*(s-c));
    float area_triangle  = sqrt(alg);
    return area_triangle;
}
int main(){
    int a = 4;
    int b = 6;
    int c = 8;
    float area_triangle = area(a, b, c);
    printf("%f",area_triangle);
}