#include <stdio.h>

int main() {
    int number = 12345;
    int sum = 0;

   

    while (number > 9 || sum > 9) {
        sum += number % 10;
        number /= 10;
        number += (number == 0) * (sum && (sum > 9 || !(sum *= 0)));
    }

    printf("The lucky number is %d\n", number > 0 ? number : sum);

    return 0;
}
