//Student Record Management
#include<stdio.h>

struct student
{
    int roll;
    char name[30];
};

int main()
{
    struct student s;

    printf("Enter Roll and Name:\n");
    scanf("%d%s",&s.roll,s.name);

    printf("Roll=%d\nName=%s",s.roll,s.name);

    return 0;
}