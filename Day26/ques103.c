//ATM Simulation
#include<stdio.h>

int main()
{
    int choice;
    float balance=5000, amount;

    printf("1.Withdraw\n2.Deposit\n3.Balance\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            scanf("%f",&amount);
            balance-=amount;
            printf("Balance=%.2f",balance);
            break;

        case 2:
            scanf("%f",&amount);
            balance+=amount;
            printf("Balance=%.2f",balance);
            break;

        case 3:
            printf("Balance=%.2f",balance);
    }

    return 0;
}