#include <stdio.h>

int main() {
    int n, sum = 0;
    int i; 
    printf("Enter a number n: ");
    scanf("%d", &n);

   for(i = 2; i <= n; i += 2) {
        sum += i; 
    }

    printf("Sum of even numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}

