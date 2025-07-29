#include <stdio.h>
int main() {
    int days, years,month, weeks, remainingDays;
    printf("Enter total number of days: ");
    scanf("%d", &days);
    years = days / 365;
    month = days /30;
    days = days % 365;
	weeks = days / 7;
    remainingDays = days % 7;
    printf("\nEquivalent is:\n");
    printf("Years : %d\n", years);
    printf("month : %d\n", month);
    printf("Weeks : %d\n", weeks);
    printf("Days  : %d\n", remainingDays);
}

