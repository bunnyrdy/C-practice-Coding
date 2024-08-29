#include <stdio.h>

int main() {
    int num1 = 23;
    int num2 = 12;
    int num3 = 11;
    int num4 = 40;
    int num5 = 9;
    
    int max = num1;  
    
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }
    if (num5 > max) {
        max = num5;
    }
    
   // minimum 
    int min = num1;  
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    if (num4 < min) {
        min = num4;
    }
    if (num5 < min) {
        min = num5;
    }
    
    // Output the results
    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);
    
    return 0;
}
