#include <stdio.h>

int main() {
    int n, i, j;
    long long fact, sum = 0;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = 1;
        for(j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += fact;
    }

    printf("Sum of factorials from 1! to %d! is: %lld\n", n, sum);

    return 0;
}

