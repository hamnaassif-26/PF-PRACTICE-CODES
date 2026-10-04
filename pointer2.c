#include <stdio.h>
int main()
{
    int balanceA = 56000, balanceB = 26000;
    int *currentBalance = &balanceA;

    printf("BALANCE A IS :%d\n",balanceA);
    printf("BALANCE B IS : %d\n",balanceB);

    printf("Balance of A BY POINTER : %d\n",*currentBalance);

    printf("Address of BBALANCEA IS: %p\n",(void*)currentBalance);

    *currentBalance = 56790;

    printf("Value of Account a via pointer after update : %d\n",balanceA);

    currentBalance = &balanceB;
    printf("Account A: %p",(void*)currentBalance);
    printf("Account B: %p",(void*)currentBalance);

    printf("Value of A: %d",balanceA);
    printf("Value of B: %d",balanceB);
    return 0;
}