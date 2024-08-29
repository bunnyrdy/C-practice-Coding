#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int original_num = n;
    int sum = 0;
    int count = 0;
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    
    if (sum == original_num) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }
    
    return 0;
}
