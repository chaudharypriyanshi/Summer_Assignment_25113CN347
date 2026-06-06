//Write a program to Find x^n without pow()
#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter the base: ");
    scanf("%d", &x);

    printf("Enter the power: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        result = result * x;
    }

    printf("Answer = %lld\n", result);

    return 0;
}