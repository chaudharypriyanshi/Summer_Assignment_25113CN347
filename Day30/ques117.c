//Student Record System Using Arrays and Strings
#include<stdio.h>

int main()
{
    char name[5][30];
    int i;

    for(i=0;i<5;i++)
        scanf("%s",name[i]);

    for(i=0;i<5;i++)
        printf("%s\n",name[i]);

    return 0;
}