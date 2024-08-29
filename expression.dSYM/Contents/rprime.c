#include <stdio.h>

int isprime_recursive(int number, int divisor) {
    if (number <= 1) {
        return 0;
    }
    if ( divisor == number) {
        return 1; 
    }
    if (number % divisor == 0) {
        return 0; 
    }
    return isprime_recursive(number, divisor + 1); 
}


void factors(int number, int count) {
    if (number <= 1) {
        return;
    }
    if (isprime_recursive(count, 2) && number % count == 0) {
        printf("%d ", count);
        factors(number / count, count); 
    } else {
        factors(number, count + 1);
    }
}

int main() {
    int number = 32;
    printf("Prime factors of %d are: ", number);
    factors(number, 2);
    printf("\n");
r    return 0;
}
