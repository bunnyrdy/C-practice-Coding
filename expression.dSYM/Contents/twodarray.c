#include<stdio.h>
int main(){
    int arr[4][2];
    int i, j;
    for (int i = 0; i <= 3; i++)
    {
        printf("enter the input ");
        scanf("%d %d", &arr[i][0],&arr[i][1]);
    }

    for (int i = 0; i <= 3; i++)
    {
        printf("\n%d %d",arr[i][0],arr[i][1]);
    }
    
    

}