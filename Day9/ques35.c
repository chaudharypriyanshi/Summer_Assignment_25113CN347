// Write a program to Print repeated character 
// pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE 
#include <stdio.h>

int main()
{
    int n, i, j;
    char ch;

    printf("Enter the number = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        ch = 'A' + i;

        for(j = 0; j <= i; j++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}