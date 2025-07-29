#include <stdio.h>

void main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    switch (number % 2) {
        case 0:
            printf("%d is even.\n", number);
            break;
        case 1:
            printf("%d is odd.\n", number);
            break;
        default:
            printf("This should not happen.\n");
    }
}

