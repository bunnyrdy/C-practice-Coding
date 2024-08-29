#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   int p,t;
   float r,si;
   p = 1000;
   t = 3;
   r = 8.5;
   si = (p*t*r)/100;
   printf("princple = %d \n dutaion = %d \n rate of interrest = %f",p,t,r);
   printf("\n");
   printf("simple intrest = rs.%f",si);
}