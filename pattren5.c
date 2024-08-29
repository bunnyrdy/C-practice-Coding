#include<stdio.h>
int main(){
    int row = 5;
    int num = 1;
    int constn = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = row-i; j > 0; j--)
        {
            printf("-");
        }
        for (int k = 1; k <= i; k++)
        {
            if(k == 1 || k== i){
                printf("%d ",constn);
            } else{
                num++;
            printf("%d ",num);
            
            }
        }
        printf("\n");
        
        
    }
    
}