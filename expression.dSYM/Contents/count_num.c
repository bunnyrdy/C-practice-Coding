#include <stdio.h>

int main() {
    int number;
    int pos_count = 0;
    int neg_count = 0;
    int zero_count = 0;
    char end;

    while (number == 0 || number < 1 || number > 1) {
        printf("Enter the number: ");
        scanf("%d", &number);

        if (number == 0) {
            zero_count++;
        } else if (number < 0) {
            neg_count++;
        } else if (number > 0) {
            pos_count++;
        }

        printf("If you want to stop, press y. Otherwise press any - key: ");
        scanf(" %c", &end);  // Note the space before %c to consume newline

        if (end == 'y') {
            break;
        }
    }

    printf("Zero count: %d\n", zero_count);
    printf("Positive count: %d\n", pos_count);
    printf("Negative count: %d\n", neg_count);

    return 0;
}
