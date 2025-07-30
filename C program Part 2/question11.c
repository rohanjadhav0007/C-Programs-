#include <stdio.h>
#include <stdbool.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    
    int i;
    for (i = 2; i * i <= num; i++) {  
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int num;

    printf("Prime numbers between 300 and 400 are:\n");

    for (num = 400; num >= 300; num--) { 
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}

