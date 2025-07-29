#include <stdio.h>

void main() {
    int amount;
    int n2000 = 0, n500 = 0, n200 = 0, n100 = 0;

    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    if (amount % 100 != 0) {
        printf("Invalid amount! Please enter in multiples of 100.\n");
        return 0;
    }

    if (amount >= 2000) {
        n2000 = amount / 2000;
        amount %= 2000;
    }
    if (amount >= 500) {
        n500 = amount / 500;
        amount %= 500;
    }
    if (amount >= 200) {
        n200 = amount / 200;
        amount %= 200;
    }
    if (amount >= 100) {
        n100 = amount / 100;
        amount %= 100;
    }

    printf("\nNotes to be disbursed:\n");
    if (n2000) printf("2000 x %d\n", n2000);
    if (n500)  printf("500  x %d\n", n500);
    if (n200)  printf("200  x %d\n", n200);
    if (n100)  printf("100  x %d\n", n100);

}

