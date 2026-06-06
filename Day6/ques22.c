// Write a program to Convert binary to decimal
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[50];
    int decimal = 0, power = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);

    for (int i = len - 1; i >= 0; i--) {
        decimal += (binary[i] - '0') * pow(2, power);
        power++;
    }

    printf("Decimal number = %d\n", decimal);

    return 0;
}