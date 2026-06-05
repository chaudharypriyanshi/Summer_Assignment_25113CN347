//Write a program to Find largest prime factor
#include <stdio.h>

int main() {
    long long int n;
    int factor = 2, largestPrimeFactor = 0;

    printf("Enter the number: ");
    scanf("%lld", &n);

    while (n != 1) {
        if (n % factor == 0) {
            largestPrimeFactor = factor;
            n = n / factor;
        } else {
            factor++;
        }
    }

    printf("Largest prime factor is %d\n", largestPrimeFactor);

    return 0;
}