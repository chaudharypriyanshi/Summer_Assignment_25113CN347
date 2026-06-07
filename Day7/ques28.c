//Write a program to Recursive reverse number.
#include <stdio.h>

int main()
{
    static int n = -1;
    static int rev = 0;

    if (n == -1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    }

    if (n == 0)
    {
        printf("Reversed number = %d", rev);
        return 0;
    }

    rev = rev * 10 + (n % 10);
    n = n / 10;

    main();   // Recursive call

    return 0;
}