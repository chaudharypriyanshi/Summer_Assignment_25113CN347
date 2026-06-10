// Write a program to Print number pyramid. 
//     1 
//    121 
//   12321 
//  1234321 
// 123454321
// Print Number Pyramid using while loop
#include <stdio.h>

int main()
{
    int n, i = 1, j, space;

    printf("Enter number of rows = ");
    scanf("%d", &n);

    while(i <= n)
    {
        /* Print spaces */
        space = 1;
        while(space <= n - i)
        {
            printf(" ");
            space++;
        }

        /* Ascending numbers */
        j = 1;
        while(j <= i)
        {
            printf("%d", j);
            j++;
        }

        /* Descending numbers */
        j = i - 1;
        while(j >= 1)
        {
            printf("%d", j);
            j--;
        }

        printf("\n");
        i++;
    }

    return 0;
}