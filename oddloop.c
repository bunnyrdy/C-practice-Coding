#include<stdio.h>
int main(){
    int n;
    char another;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("The square of %d is %d\n", n, n*n);
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &another);
    } while (another == 'y');
    

}