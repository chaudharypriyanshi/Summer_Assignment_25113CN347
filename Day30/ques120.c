//Complete Mini Project Using Arrays, Strings and Functions
#include<stdio.h>

void display(char name[])
{
    printf("Student Name: %s",name);
}

int main()
{
    char name[30];

    scanf("%s",name);

    display(name);

    return 0;
}