#include<stdio.h>
int[] search(int arr[], int target){
  int i = 0;
  int lengtharr = 5;
  int j = lengtharr -1;
  int arrresult[] = {};
  while (i<=j)
  {
   if (arr[i] == arr[j])
   {
        return arrresult[i,j];
   } else if (arr[i] != arr[j])
   {
      j--;
   }
   i++;
   
  }
     
}