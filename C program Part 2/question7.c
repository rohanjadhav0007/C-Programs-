#include <stdio.h>

int main() {
    int n, sum = 0;
    int i;

    printf("Enter a number n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2) {
        sum += i;  
    }
    printf("Sum of odd numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}

