#include <stdio.h>

void main() {
    int i;

    printf("Numbers from 1 to 20, stopping at 15:\n");

    for(i = 1; i <= 20; i++) {
        if(i == 15) {
            break;  
        }
        printf("%d ", i);
    }

    printf("\nLoop has been terminated.\n");

}

