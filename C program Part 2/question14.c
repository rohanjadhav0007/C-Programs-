#include <stdio.h>
#include <math.h>

int main() {
    int i,base, index;
    long long power = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter index (exponent): ");
    scanf("%d", &index);

    for( i = 1; i <= index; i++) {
        power *= base;
    }

    printf("%d raised to the power %d is: %lld\n", base, index, power);

    return 0;
}

