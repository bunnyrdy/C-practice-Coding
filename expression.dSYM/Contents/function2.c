#include <stdio.h>

// Function prototype with void return type
void square(float, float*);

int main() {
    float a, b;
    printf("\nEnter any number: ");
    scanf("%f", &a);

    // Call the function with the address of b to store the result
    square(a, &b);

    printf("\nSquare of %f is %f", a, b);
    return 0;
}

// Function definition with void return type
void square(float x, float* result) {
    *result = x * x;
}
