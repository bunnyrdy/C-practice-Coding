#include<stdio.h>
#include<string.h>
int isPalindrome(char str[]){
    int length = strlen(str);
    for(int i = 0;i<length;i++){
        if (str[i] != str[length -i - 1]){
            return 0;
        }
        
    }
            return 1;

}
int main(){
    char str[] = "bunny";
    if (isPalindrome(str) == 1)
    {
        printf("the given name is palindrome");
    } else {
        printf("the given name is not palindrome");
    }
   
    
}
