#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to print prime factors of a given number
void prime_factors(int number) {
    int num = number;
    for (int i = 2; i <= number; i++) {
        if (is_prime(i)) {
            while (num % i == 0) {
                printf("%d ", i);
                num = num / i;
            }
        }
    }
    if (num > 1) {
        printf("%d", num);
    }
}

int main() {
    int number = 11;
    prime_factors(number);
    return 0;
}
