#include<stdio.h>

 int main() {

float i,j,k,fact=1,factsum,numsum;

printf("\tTerm\t\tFactorial\n\n");

for(i=1;i<=7;i++) {

for(j=i;j>=2;j--) {

fact=fact*j;
factsum=factsum+fact;
break;
}
numsum=numsum+i;
printf("\t%.0f\t\t%.0f\n",i,fact);
}

k=numsum/factsum;

printf("\n\nsum of 7 terms = %.0f ",numsum);
printf("\nsum of all factorials = %.0f",factsum);
printf("\n\naddition of all terms / sum of factorials: %f",k);



return 0;
}