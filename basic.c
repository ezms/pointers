#include <stdio.h>

int main()
{
    int amount = 15000;
    int *bank = &amount;

    printf("John Doe's home address: %p\n", &amount);
    printf("Account balance: %d\n", amount);

    printf("\n------------------------------\n\n");

    printf("Bank address: %p\n", &bank);
    printf("John Doe's account balance: %d\n", *bank);
    printf("Send Foreign Transaction Fees to: %p\n", bank);

    return 0;
}
