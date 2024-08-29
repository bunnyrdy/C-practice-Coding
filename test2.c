#include <stdio.h>

int main() {
    // Write C code here
    int inum,digit1,sum1,digit2,sum2;
    printf("enter 2 digit number\n");
    scanf("%d",&inum);
    digit1=inum%10;
    sum1=digit1+1;
    inum=inum/10;
    digit2=inum%10;
    sum2=digit2+1;
    //inum=inum/10;
    printf("changed number is  %d  %d\n",sum2,sum1);
    
    
}