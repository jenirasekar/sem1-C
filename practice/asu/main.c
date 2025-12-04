#include <stdio.h>

void fibonacci_iterative(int n) {
    if (n <= 0) return;

    long long a = 0, b = 1;

    printf("Fibonacci series (iterative): ");
    for (int i = 0; i < n; i++) {
        printf("%lld ", a);
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the length N: ");
    scanf("%d", &n);

    fibonacci_iterative(n);

    return 0;
}
