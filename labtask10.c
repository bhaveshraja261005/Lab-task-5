#include <stdio.h>

int main() {
    int account_type, transaction;

    printf("=== Welcome to the ATM ===\n");
    printf("Select Account Type:\n");
    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("Enter choice (1 or 2): ");

    if (scanf("%d", &account_type) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (account_type) {
        case 1:
            printf("\n--- Savings Account Menu ---\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("Enter transaction choice (1-3): ");
            scanf("%d", &transaction);

            
            switch (transaction) {
                case 1:
                    printf("Action: Depositing funds into your Savings Account.\n");
                    break;
                case 2:
                    printf("Action: Withdrawing funds from your Savings Account.\n");
                    break;
                case 3:
                    printf("Action: Displaying current balance for your Savings Account.\n");
                    break;
                default:
                    printf("Error: Invalid transaction choice '%d' for Savings Account.\n", transaction);
                    break;
            }
            break;

        case 2:
            printf("\n--- Current Account Menu ---\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("Enter transaction choice (1-3): ");
            scanf("%d", &transaction);

            
            switch (transaction) {
                case 1:
                    printf("Action: Depositing funds into your Current Account.\n");
                    break;
                case 2:
                    printf("Action: Withdrawing funds from your Current Account.\n");
                    break;
                case 3:
                    printf("Action: Displaying current balance for your Current Account.\n");
                    break;
                default:
                    printf("Error: Invalid transaction choice '%d' for Current Account.\n", transaction);
                    break;
            }
            break;

        default:
            printf("Error: Invalid account type choice '%d'. Please select 1 or 2.\n", account_type);
            break;
    }

    return 0;
}