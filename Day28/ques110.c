//Bank Account System
#include<stdio.h>

int main()
{
    char name[30];
    float balance;

    scanf("%s%f",name,&balance);

    printf("Name=%s\nBalance=%.2f",name,balance);

    return 0;
}