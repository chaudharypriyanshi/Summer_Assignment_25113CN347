// Write a program to Print character 
//     A 
//    ABA 
//   ABCBA 
//  ABCDCBA 
// ABCDEDCBA
// Print Character Pyramid using While Loop
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

        /* Increasing characters */
        j = 1;
        while(j <= i)
        {
            printf("%c", 64 + j);
            j++;
        }

        /* Decreasing characters */
        j = i - 1;
        while(j >= 1)
        {
            printf("%c", 64 + j);
            j--;
        }

        printf("\n");
        i++;
    }

    return 0;
}