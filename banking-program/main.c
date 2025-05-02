#include <stdio.h>

void checkBalance(float balance);
void printTransaction(const char *action, float amount, float balance);
float deposit(void);
float withdraw(float balance);

int main()
{
    float balance = 0.0f;
    int choice;

    printf("***** Banking Program *****\n");
    do
    {
        printf("\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1)
            break;

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;

        case 2: // use {} if you want to declare variables inside a case
        {
            float amt = deposit();
            balance += amt;
            printTransaction("deposited", amt, balance);
            break;
        }

        case 3: // use {} if you want to declare variables inside a case
        {
            float amt = withdraw(balance);
            balance -= amt;
            printTransaction("withdrew", amt, balance);
            break;
        }

        case 4:
            printf("\nThanks for banking with us!\n");
            break;

        default:
            printf("Invalid choice. Please try again!\n");
        }
    } while (choice != 4);

    return 0;
}

void checkBalance(float balance)
{
    printf("\nCurrent balance: K%.2f\n", balance);
}

// DRY’ed-up function for both deposit & withdraw messages
void printTransaction(const char *action, float amount, float balance)
{
    printf("\nYou %s K%.2f. New balance: K%.2f\n", action, amount, balance);
}

float deposit(void)
{
    float amount = 0.0f;
    while (amount <= 0.0f)
    {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        if (amount <= 0.0f)
            printf("Invalid amount. Try again!\n");
    }
    return amount;
}

float withdraw(float balance)
{
    float amount = 0.0f;
    do
    {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount <= 0.0f)
            printf("Enter a positive amount!\n");
        else if (amount > balance)
            printf("Insufficient funds!\n");
    } while (amount <= 0.0f || amount > balance);
    return amount;
}