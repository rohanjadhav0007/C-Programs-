#include <stdio.h>

int main() {
    int mark1, mark2, mark3;
    int total;
    float percentage;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &mark1); 

    printf("Enter marks for Subject 2: ");
    scanf("%d", &mark2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &mark3);
 
    total = mark1 + mark2 + mark3;
    percentage = total / 3.0; 

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage); 

}

