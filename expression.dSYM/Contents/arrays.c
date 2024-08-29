#include<stdio.h>
int main(){
    int avg , sum = 0;
    int marks[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("\n Enter the marks");
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i <= 4 ; i++)
    {
        sum = sum + marks[i];
    }
     avg = sum / 5;
     printf ( "\nAverage marks = %d", avg ) ;
    
}