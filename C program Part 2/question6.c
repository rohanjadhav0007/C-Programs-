#include <stdio.h>

int main() {
  int n, sum = 0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (int i = 2; i <= n; i += 2) {
    sum += i;
  }

  printf("Sum of even numbers between 1 and %d is: %d\n", n, sum);

  return 0;
}

