#include<stdio.h>
int main(){
   for(int i = 1;i<=3;i++){
    for (int j = 1; j <= 3; j++){
        for (int k = 1; k <=3; k++)
        {
            if(i!=j && i!= k && k!=j){
                printf("%d %d %d\n",i,j,k);
            }
        }
        
    }
    
   }

}