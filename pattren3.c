#include <stdio.h>

int main() {
    int num = 1;
    int rows = 4;
    
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for the pyramid shape
        for (int k = rows - i; k > 0; k--) {
            printf("  ");
        }
        // Print the numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d   ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}
