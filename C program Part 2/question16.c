#include <stdio.h>

long long factorial(int n) {
	int i;
    long long fact = 1;
    for( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, digit;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == num)
        printf("%d is a Krishnamurthy number.\n", num);
    else
        printf("%d is NOT a Krishnamurthy number.\n", num);

    return 0;
}

