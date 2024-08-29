#include<stdio.h>
void running(int number,int num, int count){
    if (count == number)
    {
        printf("u have reached the number");
    }else{
        num += count;
        printf("%d ", num);
        
        return running(number, num, count +1);

    }
    
}
int main(){
    int number = 25;
  int num = 0;
   int count = 0;
   running(number, num, count);

}