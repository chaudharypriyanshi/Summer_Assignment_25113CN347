//Mini Employee Management System
#include<stdio.h>

struct employee
{
    int id;
    char name[30];
};

int main()
{
    struct employee e;

    scanf("%d%s",&e.id,e.name);

    printf("%d %s",e.id,e.name);

    return 0;
}