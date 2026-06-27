//Salary Management System
#include<stdio.h>

int main()
{
    float basic,hra,da,salary;

    scanf("%f",&basic);

    hra=basic*0.20;
    da=basic*0.10;

    salary=basic+hra+da;

    printf("Salary=%.2f",salary);

    return 0;
}