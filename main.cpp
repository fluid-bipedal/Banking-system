#include "bank.h"

int main() {
    Bank bank;

    // Create accounts
    Account* account1 = bank.createAccount("John Doe", 1000.0);
    Account* account2 = bank.createAccount("Jane Doe", 500.0);

    // Perform transactions
    bank.deposit(account1, 500.0);
    bank.withdraw(account2, 200.0);

    // Display account details
    bank.displayAccountDetails(account1);
    bank.displayAccountDetails(account2);

    return 0;
}
