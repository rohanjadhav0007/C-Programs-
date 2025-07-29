

//#include <stdio.h>
//
//int main() {
//    int n = 20, i, prime = 1;
//
//    for(i = 2; i <= n / 2; i++) {
//        if(n % i == 0) {
//            prime = 0;
//            break;
//        }
//    }
//
//    if(prime)
//        printf("%d is prime\n", n);
//    else
//        printf("%d is Not prime\n", n);
//}

//#include <stdio.h>
//
//int main() {
//    // Fibonacci Series: 0 1 1 2 3 5 8 13 21 34
//    int f0 = 0, f1 = 1, f2, i;
//
//    printf("%d %d", f0, f1); 
//
//    for(i = 3; i <= 10; i++) {
//        f2 = f0 + f1;
//        printf(" %d", f2);
//        f0 = f1;
//        f1 = f2;
//    }
//
//    printf("\n");
//}

//#include <stdio.h>
//
//int main() {
//    int base = 5, index = 4, power = 1;
//
//    for(int i = index; i >= 1; i--) {
//        power = power * base;
//    }
//
//    printf("Power = %d\n", power);
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int n, i, f = 1;
//
//    printf("Enter the number: ");
//    scanf("%d", &n);
//
//    for(i = 1; i <= n; i++) {
//        f = f * i;
//    }
//
//    printf("Factorial of %d is: %d\n", n, f);
//}

//#include <stdio.h>
//
//int main() {
//    int num = 5, i, t;
//
//    for(i = 1; i <= 10; i++) {
//        t = num * i;
//        printf("%d * %d = %d\n", num, i, t);
//    }
//}

//#include <stdio.h>
//
//int main() {
//    int i, sum = 0;
//
//    for(i = 1; i <= 10; i++) {
//        sum += i; // sum = sum + i;
//    }
//
//    printf("Addition from 1 to 10 = %d\n", sum);
//}

//#include <stdio.h>
//
//int main() {
//    int i;
//
//    for(i = 10; i >= 1; i--) {
//        printf("%2d ", i);
//    }
//
//    printf("\n"); 
//}

