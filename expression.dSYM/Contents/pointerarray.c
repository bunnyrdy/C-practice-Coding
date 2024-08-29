#include<stdio.h>
int main(){
    int arr[4][2] = {
       {1234, 5},
       {3456, 6},
       {1212, 9},
       {1218, 10}

    };
    int (*p)[2];
    int i,j, *pint;
    for ( i = 0; i <= 3; i++)
    {
        p = &arr[i];
        pint = (int *)p;
        printf("\n");
        for ( j = 0; j <= 1; j++)
    {
        printf ( "%d ", *( pint + j ) ) ;
    }
    }
    
    
}