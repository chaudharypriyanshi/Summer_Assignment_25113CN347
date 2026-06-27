//Employee Management
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

    printf("ID=%d\nName=%s",e.id,e.name);

    return 0;
}