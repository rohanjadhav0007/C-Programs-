#include <stdio.h>

int main() {
    int i;
    printf("Squares of numbers from 1 to 20:\n");
    for(i = 1; i <= 20; i++) {
        printf("Square of %d = %d\n", i, i * i);
    }
    return 0;
}

