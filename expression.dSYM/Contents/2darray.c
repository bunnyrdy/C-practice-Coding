#include <stdio.h>

int main() {
    int row, col;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &arr[i][0]); 
        for (int j = 1; j <= col; j++) { 
            printf("Enter the marks for subject %d: ", j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing the stored values
    printf("\nStored data:\n");
    for (int i = 0; i < row; i++) {
        printf("Roll number: %d, Marks: ", arr[i][0]);
        for (int j = 1; j <= col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
