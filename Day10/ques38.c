// Write a program to Print reverse pyramid. 
// ********* 
//  ******* 
//   ***** 
//    *** 
//     * 
#include <stdio.h>

int main()
{
    int n, i, j, b;

    printf("Enter the number = ");
    scanf("%d", &n);

    i = 1;

    while(n > 0)
    {
        b = 1;
        while(b < i)
        {
            printf(" ");
            b++;
        }

        j = 1;
        while(j <= (2 * n - 1))
        {
            printf("*");
            j++;
        }

        printf("\n");
        n--;
        i++;
    }

    return 0;
}