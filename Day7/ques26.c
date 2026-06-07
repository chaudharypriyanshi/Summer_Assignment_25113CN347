// Write a program to Recursive Fibonacci. 
#include <stdio.h>

int main()
{
    static int n = -1;

    if (n == -1)
    {
        printf("Enter the number: ");
        scanf("%d", &n);
    }

    if (n == 0)
        return 0;

    static int a = 0, b = 1, c, count = 0;

    if (count < n)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        count++;

        main();   // Recursive call
    }

    return 0;
}