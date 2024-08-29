#include<stdio.h>
# define ops 4
float sum(float a, float b){
    return (a+b);
}
float sub(float a, float b){
    return (a-b);
}
float multi(float a, float b){
    return (a*b);
}
float div(float a, float b){
    return (a/b);
}

int main(){
    float(*ptrfun2[ops])(float,float) = {sum,sub,multi,div};
    int choice;
  float a , b;
  printf("enter the choice:0 for sum,1 for sub, 2 for multi, 3 for div");
  scanf("%d", &choice);
  printf("enter the a, b");
  scanf("%f %f",&a,&b);
  printf("%f",ptrfun2[choice](a,b));
  
}