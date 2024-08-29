#include<stdio.h>
void  duplicate( int number, int arr[]){
    while (number >  0 )
    {     int rem = number % 10;
        if(arr[rem] == 1){
        break;
        }
        arr[rem] = 1;
        number = number/ 10;
    
    }
    if (number > 0)
    {
        printf("the give number contains duplicates");
    } else{
         printf("the give number does not contains duplicates");
    }
    
    
    
}
int main(){
    int number = 12345;
    int arr[10] = {0};
    duplicate(number,arr);
}