#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 121 to 229:\n");

    for(i = 121; i <= 229; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

