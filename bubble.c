#include<stdio.h>
void search(int length, int arr[]) {
    // Input array elements
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <length-1; i++)
{
   for (int j = 0; j < length-1-i; j++)
   {
       if (arr[j] > arr[j+1])
       {
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
       
   }    
   
}
}
printf("Sorted array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
int main(){
    int length;
    int arr[length];
    printf("enter the  length of an array\n");
    scanf("%d", &length);
    search(length,arr);
}
