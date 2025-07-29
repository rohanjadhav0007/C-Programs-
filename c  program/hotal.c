#include <stdio.h>

int main() {
    int mainChoice, subChoice, qty;
    float price, total;

    printf("_________MENU_________\n");
    printf("1. Punjabi\n");
    printf("2. Maharashtrian\n");
    printf("Enter your choice: ");
    scanf("%d", &mainChoice);

    switch(mainChoice) {
        case 1:
            printf("\n--- Punjabi Menu ---\n");
            printf("1. Mutter Paneer - ?120\n");
            printf("2. Kofta Curry   - ?150\n");
            printf("3. Butter Naan   - ?40\n");
            printf("Enter your dish number: ");
            scanf("%d", &subChoice);

            switch(subChoice) {
                case 1:
                    price = 120;
                    break;
                case 2:
                    price = 150;
                    break;
                case 3:
                    price = 40;
                    break;
                default:
                    printf("Invalid sub-menu choice!\n");
                    return 0;
            }
            break;

        case 2:
            printf("\n--- Maharashtrian Menu ---\n");
            printf("1. Pithla Bhakri  - ?100\n");
            printf("2. Misal Pav      - ?80\n");
            printf("3. Vada Pav       - ?20\n");
            printf("Enter your dish number: ");
            scanf("%d", &subChoice);

            switch(subChoice) {
                case 1:
                    price = 100;
                    break;
                case 2:
                    price = 80;
                    break;
                case 3:
                    price = 20;
                    break;
                default:
                    printf("Invalid sub-menu choice!\n");
            }
            break;

        default:
            printf("Invalid main menu choice!\n");
            
    }

    printf("Enter quantity: ");
    scanf("%d", &qty);

    total = price * qty;

    printf("\n-------- BILL --------\n");
    printf("Unit Price: ?%.2f\n", price);
    printf("Quantity  : %d\n", qty);
    printf("Total     : ?%.2f\n", total);
    printf("----------------------\n");
}

