#include<stdio.h>
void selection(int arr[],int length){
int i,j;
for ( i = 0; i <length-1; i++)
{
   for ( j = i+1; j > 0; j--)
   {
       if (arr[j] < arr[j-1])
       {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
       } else{
        break;
       }
       
   }    
   
}
printf("Sorted array: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int length = 5;
    int arr[5] = { 23,12,45,9,56};
    selection(arr,length);

}