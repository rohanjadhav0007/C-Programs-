#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while(num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int main() {
    int num, temp, digit, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = countDigits(num);
    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
        n--;
    }

    if(sum == num)
        printf("%d is a Disarium number.\n", num);
    else
        printf("%d is NOT a Disarium number.\n", num);

    return 0;
}

