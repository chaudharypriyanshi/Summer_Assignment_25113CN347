//Write a program to Recursive sum of digits
#include <stdio.h>

int main()
{
    static int n = -1;
    static int sum = 0;

    if (n == -1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    }

    if (n == 0)
    {
        printf("Sum of digits = %d", sum);
        return 0;
    }

    sum = sum + (n % 10);
    n = n / 10;

    main();   // Recursive call

    return 0;
}