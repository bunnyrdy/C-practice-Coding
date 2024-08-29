#include<stdio.h>
char searchsmall(char arr[], char target){
    int start = 0;
    int lengtharr = 3;
    int end = (lengtharr)-1;
    while (start <= end)
    {
        int mid = start + (end-start) / 2;
        if (target < arr[mid])
        {
            end  = mid -1;
        } else{
        start = mid + 1;
        }
    }
     return arr[start % lengtharr];
    
}
int main(){
    char arr[] = {'a','c','d'};
    char target = 'd';
    char result  = searchsmall(arr,target);
    printf("%c",result);
}