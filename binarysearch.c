#include<stdio.h>
int search(int arr[],int target){
   int length = 6;
   int start = 0;
   int end = length;
   while (start <= end)
   {
    int mid  = start + (end-start)/2;
     if (target < arr[mid])
     {
        end  = mid-1;
     }
     else if(target > arr[mid]){
        start = mid + 1;
     }else{
        return arr[mid];
     }
     

     
   }
    return start;
   
  

}
int main(){
    int arr[] = {2,3,5,9,14,16,18};
    int target = 6;
   int result = search(arr,target);
   printf("%d",result);
}