#include <stdio.h>

void main() {
    int i = 121;

    printf("Even numbers from 121 to 229:\n");

    do {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    } while(i <= 229);

    printf("\n");
}

