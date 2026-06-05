//Write a program to Check strong number
#include <stdio.h>

int main() {
    int n, temp, digit;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        digit = n % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == temp) {
        printf("%d is a Strong Number\n", temp);
    } else {
        printf("%d is not a Strong Number\n", temp);
    }

    return 0;
}
