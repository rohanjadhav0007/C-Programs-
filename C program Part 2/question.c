#include <stdio.h>

void main() {
    int i = 521;

    printf("Odd numbers from 521 to 229:\n");

    while(i >= 229) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
        i--;
    }

    printf("\n");
}

