#include<stdio.h>
int main(){
    int n = 4;
    for (int i = 0; i < n*2; i++)
    {
        int finalrow = i > n ? (2*n-i) : i;
    int totalSpaces = n - finalrow;
    for (int s = 0; s < totalSpaces; s++)
    {
       printf(" ");
    }
    
        for (int j = 0; j < finalrow; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
        
        
    }
    
}