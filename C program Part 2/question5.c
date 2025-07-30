#include <stdio.h>

int main() {
    char ch;

    printf("Alphabets from a to z:\n");

    for(ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }

    printf("\n");
    return 0;
}

