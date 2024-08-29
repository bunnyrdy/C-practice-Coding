#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int org_num = n;
    int sum = 0;
    int count = 0; ;
    while(n != 0){
        n = n / 10;
        count ++;
    }
    n = org_num;
    while(n != 0){
        int digit = n % 10;
        int power = 1;
        for(int i = 1; i <= count; i++){
            power *= digit;
            }
            sum += power;
            n = n / 10;
            }
            if(sum == org_num){
                printf("%d is an Armstrong number.\n", org_num);
                }
                else{
                    printf("%d is not an Armstrong number.\n", org_num);
                    }
                    return 0;
            

}