//Mini Library System
#include<stdio.h>

int main()
{
    char book[3][30];
    int i;

    for(i=0;i<3;i++)
        scanf("%s",book[i]);

    for(i=0;i<3;i++)
        printf("%s\n",book[i]);

    return 0;
}