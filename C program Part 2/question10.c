#include <stdio.h>

int main() {
    int num, digit;
    int frequency[10] = {0}; 
    printf("Enter a number: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;

    while (num != 0) {
        digit = num % 10;  
        frequency[digit]++;
        num /= 10; 
    }

    printf("Frequency of each digit:\n");
    int i;
    for (i = 0; i < 10; i++) {
        if (frequency[i] > 0) {  
            printf("%d: %d\n", i, frequency[i]);
        }
    }

    return 0;
}

