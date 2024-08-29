#include<stdio.h>
int peakpoint(int arr[]){
    int start = 0;
    int length = 4  ;
    int end = length - 1;
    while (start  < end)
    {
        int mid = start + (end-start)/2;
        if (arr[mid]>arr[mid+1])
        {
            end = mid;
        } else if (arr[mid] < arr[mid +1])
        {
            start = mid + 1;
        } 
        

        }
         return start;
    }
    int main(){
        int arr[] = {0,2,1,0};
        int result = peakpoint(arr);
        printf("%d",result);
    }
    