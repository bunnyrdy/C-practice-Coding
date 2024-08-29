#include <stdio.h>

int main() {
    int number;
    int count;

    printf("Enter the number: ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i++) {
        count = 0;  
        for (int j = 2; j < i; j++) {  
            if (i % j == 0) {
                count++;
                break;  
            }
        }

        if (count == 0) {
            printf("%d ", i);  
        }
    }

    return 0;
}
